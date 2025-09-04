// Konstanten
const int tasterPin = 2;    // Pin Nummer des Tasters
const int ledPin =  3;      // Pin Nummer der LED des Arduinos
 
// Variablen
int tasterStatus = 0;       // Variable für den Taster Status
 
 
void setup()
{
  pinMode(ledPin, OUTPUT);      // LED Pin wird als Ausgang gesetzt
  pinMode(tasterPin, INPUT);    // Taster Pin wird als Eingang gesetzt
}
 
 
void loop()
{
  // Lesen des Status des Taster Pins
  tasterStatus = digitalRead(tasterPin);
 
  // Prüfen ob der Taster gedrückt ist
  // Wenn der TasterState HIGH ist:
  if (tasterStatus == HIGH)
  {     
    digitalWrite(ledPin, HIGH);    // schalte die LED an
    Serial.println( "Schalter AN" );
    delay(200);
  } 
  // Wenn nicht, schalte die LED aus:
  else
  {
    digitalWrite(ledPin, LOW);    // schalte die LED aus
    Serial.println( "0" );
    delay(200);
  }
}
/*
Arduino Papierschalter v1, 14.03.22
 */
/*
//Konstanten

const int LED = 2;
   // Schalternummern
const int Schalter1 = 3;
const int Schalter2 = 4;

//Variablen

int Status1 = 0;
int Status2 = 0;


void setup(){
    //LED Ist Ausgang
    pinMode(LED, OUTPUT);
     //Schalter werden Inputs
    pinMode( Schalter1, INPUT );
    pinMode( Schalter2, INPUT );
    Serial.begin(9600);
  
}

void loop(){

    Status1 = digitalRead(Schalter1);
    Status2 = digitalRead(Schalter2);

    if (Status1 == HIGH)
    {
      digitalWrite(LED, HIGH);
      Serial.write(" 1 ON");
    }
    else
    {
     digitalWrite(LED, LOW);
    }
}
*/
