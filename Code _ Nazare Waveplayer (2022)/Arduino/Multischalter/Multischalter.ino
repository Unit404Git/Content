#include <Firmata.h>

const int Schalter1 = 53;
const int Schalter2 = 52;
const int Schalter3 = 51;
const int Schalter4 = 50;
void setup(){
    pinMode( Schalter1, INPUT );
    pinMode( Schalter2, INPUT );
    Serial.begin( 57600 );
}

void loop(){
    int value1;
    
    value1 = digitalRead( Schalter1 );
    Serial.write( value1 + " S1" );
    int value2;
    
    value2 = digitalRead( Schalter2 );
    Serial.write( value2 + " S2" );
        int value3;
    
    value2 = digitalRead( Schalter3 );
    Serial.write( value2 + " S3" );
            int value4;
    
    value2 = digitalRead( Schalter4 );
    Serial.write( value2 + " S4" );

    delay( 300 );
}
