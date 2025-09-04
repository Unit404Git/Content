#define PIN_BUTTON               A5
#define PIN_POTENTIOMETER        A4
#define PIN_LINEAR_POTENTIOMETER A3

#define PHASE_PAUSE 0
#define PHASE_PLAY  1

const byte noteON        = B10010000;
const byte noteOFF       = B10000000;
const byte pitchBend     = B11100000;
const byte programChange = B11000000; // changing instrument

const byte noteVelocity = 65;
const int delayNote = 1000;
const int delayPause = 100;

const int potentiometerMaxValue = 675;

int value = 0, oldPitchValue = 0, oldNoteValue = 0;
bool buttonPressed = false;
byte currentNote = 0, currentInstrument = 1, currentPitch = 0, currentPhase = PHASE_PAUSE;
unsigned long lastPhaseChange = 0;

void setup()
{
    // set "Hairless MIDI" to the same baud rate in the preferences
    Serial.begin(9600);
    lastPhaseChange = millis();
}

void loop()
{
    value = analogRead(PIN_BUTTON);
    if (!buttonPressed && value < 10) {
        buttonPressed = true;
        currentInstrument++;
        if (currentInstrument>128) {
            currentInstrument = 1;
        }
        MIDImessage(programChange, currentInstrument, 255);
    }
    if (buttonPressed && value > 500) {
        buttonPressed = false;
    }

    value = analogRead(PIN_POTENTIOMETER);
    if (oldNoteValue!=value) {
        oldNoteValue = value;
        currentNote = map(value, 0, potentiometerMaxValue, 0, 127);
    }

    value = analogRead(PIN_LINEAR_POTENTIOMETER);
    if (oldPitchValue-2 > value || oldPitchValue+2 < value) {
        oldPitchValue = value;
        currentPitch = map(value, 0, potentiometerMaxValue, 0, 127);
        MIDImessage(pitchBend, 0, currentPitch);
    }

    switch(currentPhase) {
        case PHASE_PLAY:
            if (millis() > lastPhaseChange) {
                MIDImessage(noteON, currentNote, noteVelocity);
                lastPhaseChange = millis() + delayNote;
                currentPhase = PHASE_PAUSE;
            }
            break;
        case PHASE_PAUSE:
            if (millis() > lastPhaseChange) {
                MIDImessage(noteOFF, currentNote, 0);
                currentPhase = PHASE_PLAY;
                lastPhaseChange = millis() + delayPause;
            }
            break;
    }
}

void MIDImessage(byte command, byte data1, byte data2)
{
    int test[] = {0,1,2,1,0,0,1,0,1,1,0};
  
    //Serial.write(command);
    //if (data1 != 255) {
        //Serial.write(data1);
    //}
    //if (data2 != 255) {
        //Serial.write(data2);
    //}
    //Serial.write(test[0]);
    //Serial.write(test[1]);
    //Serial.write(test[2]);
    Serial.write((uint8_t*)test, sizeof(test));
}
