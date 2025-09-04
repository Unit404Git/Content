const int Schalter1 = 23;
const int Schalter2 = 29;
void setup(){
    pinMode( Schalter1, INPUT );
    pinMode( Schalter2, INPUT );
    Serial.begin( 9600 );
}

void loop(){
    int value1;
    
    value1 = digitalRead( Schalter1 );
    Serial.println( value1 + " S1" );
    int value2;
    
    value2 = digitalRead( Schalter2 );
    Serial.println( value2 + " S2" );

    delay( 300 );
}
