// Konstanten
const int ledPin =  3;    // Pin Nummer der LED des Arduinos
const int Schalter1 = 2;    // Pin Nummer des Tasters  
const int Schalter2 = 4;
const int Schalter3 = 5;
const int Schalter4 = 6;
const int Schalter5 = 7; 
const int Schalter6 = 30;
const int Schalter7 = 23; 
const int Schalter8 = 24;
const int Schalter9 = 25; 
const int Schalter10 = 26;
const int Schalter11 = 27; 
const int Schalter12 = 14; 
const int Schalter13 = 15;
const int Schalter14 = 16; 
const int Schalter15 = 17;
const int Schalter16 = 18; 
const int Schalter17 = 19;
const int Schalter18 = 28; 
const int Schalter19 = 29;
const int Schalter20 = 22;  
// Variablen
int Status1 = 0;       // Variable für den Taster Status
int Status2 = 0;
int Status3 = 0; 
int Status4 = 0; 
int Status5 = 0; 
int Status6 = 0; 
int Status7 = 0; 
int Status8 = 0; 
int Status9 = 0; 
int Status10 = 0; 
int Status11 = 0; 
int Status12 = 0; 
int Status13 = 0; 
int Status14 = 0; 
int Status15 = 0; 
int Status16 = 0; 
int Status17 = 0; 
int Status18 = 0; 
int Status19 = 0; 
int Status20 = 0; 

 
void setup()
{
  pinMode(ledPin, OUTPUT);    
  pinMode(Schalter1, INPUT);
  pinMode(Schalter2, INPUT);
  Serial.begin(9600);
}
 
 
void loop()
{
  // Lesen des Status des Taster Pins
Status1 = digitalRead(Schalter1);
Status2 = digitalRead(Schalter2);
Status3 = digitalRead(Schalter3);
Status4 = digitalRead(Schalter4);
Status5 = digitalRead(Schalter5);
Status6 = digitalRead(Schalter6);
Status7 = digitalRead(Schalter7);
Status8 = digitalRead(Schalter8);
Status9 = digitalRead(Schalter9);
Status10 = digitalRead(Schalter10);
Status11 = digitalRead(Schalter11);
Status12 = digitalRead(Schalter12);
Status13 = digitalRead(Schalter13);
Status14 = digitalRead(Schalter14);
Status15 = digitalRead(Schalter15);
Status16 = digitalRead(Schalter16);
Status17 = digitalRead(Schalter17);
Status18 = digitalRead(Schalter18);
Status19 = digitalRead(Schalter19);
Status20 = digitalRead(Schalter20);



  if (Status1 == HIGH)// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> Schalter 1
  {     
    digitalWrite(ledPin, HIGH);    // schalte die LED an
    Serial.println( Status1 + "1 1 AN" );

  } 
  // Wenn nicht, schalte die LED aus:
  else
  {
    digitalWrite(ledPin, LOW);    // schalte die LED aus
    Serial.println( Status1 +  "0" );

  }
   if (Status2 == HIGH)// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> Schalter 2
  {     
    digitalWrite(ledPin, HIGH);    // schalte die LED an
    Serial.println( Status2 + "2 2 AN" );

  } 
  // Wenn nicht, schalte die LED aus:
  else
  {
    digitalWrite(ledPin, LOW);    // schalte die LED aus
    Serial.println( Status2 +  "0" );

  }
    if (Status3 == HIGH)// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> Schalter 3
  {     
    digitalWrite(ledPin, HIGH);    // schalte die LED an
    Serial.println( Status3 + "3 3 AN" );

  } 
  // Wenn nicht, schalte die LED aus:
  else
  {
    digitalWrite(ledPin, LOW);    // schalte die LED aus
    Serial.println( Status3 +  "0" );

  }
    if (Status4 == HIGH)// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> Schalter 4
  {     
    digitalWrite(ledPin, HIGH);    // schalte die LED an
    Serial.println( Status4 + "4 4 AN" );

  } 
  // Wenn nicht, schalte die LED aus:
  else
  {
    digitalWrite(ledPin, LOW);    // schalte die LED aus
    Serial.println( Status4 +  "0" );

  }
    if (Status5 == HIGH)// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> Schalter 5
  {     
    digitalWrite(ledPin, HIGH);    // schalte die LED an
    Serial.println( Status5 + "5 5 AN" );

  } 
  // Wenn nicht, schalte die LED aus:
  else
  {
    digitalWrite(ledPin, LOW);    // schalte die LED aus
    Serial.println( Status5 +  "0" );

  }
    if (Status6 == HIGH)// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> Schalter 6
  {     
    digitalWrite(ledPin, HIGH);    // schalte die LED an
    Serial.println( Status6 + "6 6 AN" );

  } 
  // Wenn nicht, schalte die LED aus:
  else
  {
    digitalWrite(ledPin, LOW);    // schalte die LED aus
    Serial.println( Status6 +  "0" );

  }
    if (Status7 == HIGH)// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> Schalter 7
  {     
    digitalWrite(ledPin, HIGH);    // schalte die LED an
    Serial.println( Status7 + "7 7 AN" );

  } 
  // Wenn nicht, schalte die LED aus:
  else
  {
    digitalWrite(ledPin, LOW);    // schalte die LED aus
    Serial.println( Status7 +  "0" );

  }
    if (Status8 == HIGH)// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> Schalter 8
  {     
    digitalWrite(ledPin, HIGH);    // schalte die LED an
    Serial.println( Status8 + "8 8 AN" );

  } 
  // Wenn nicht, schalte die LED aus:
  else
  {
    digitalWrite(ledPin, LOW);    // schalte die LED aus
    Serial.println( Status8 +  "0" );

  }
    if (Status9 == HIGH)// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> Schalter 9
  {     
    digitalWrite(ledPin, HIGH);    // schalte die LED an
    Serial.println( Status9 + "9 9 AN" );

  } 
  // Wenn nicht, schalte die LED aus:
  else
  {
    digitalWrite(ledPin, LOW);    // schalte die LED aus
    Serial.println( Status9 +  "0" );

  }
    if (Status10 == HIGH)// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> Schalter 10
  {     
    digitalWrite(ledPin, HIGH);    // schalte die LED an
    Serial.println( Status10 + "10 10 AN" );

  } 
  // Wenn nicht, schalte die LED aus:
  else
  {
    digitalWrite(ledPin, LOW);    // schalte die LED aus
    Serial.println( Status10 +  "0" );

  }
    if (Status11 == HIGH)// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> Schalter 11
  {     
    digitalWrite(ledPin, HIGH);    // schalte die LED an
    Serial.println( Status11 + "11 11 AN" );

  } 
  // Wenn nicht, schalte die LED aus:
  else
  {
    digitalWrite(ledPin, LOW);    // schalte die LED aus
    Serial.println( Status11 +  "0" );

  }
    if (Status12 == HIGH)// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> Schalter 12
  {     
    digitalWrite(ledPin, HIGH);    // schalte die LED an
    Serial.println( Status12 + "12 12 AN" );

  } 
  // Wenn nicht, schalte die LED aus:
  else
  {
    digitalWrite(ledPin, LOW);    // schalte die LED aus
    Serial.println( Status12 +  "0" );

  }
    if (Status13 == HIGH)// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> Schalter 13
  {     
    digitalWrite(ledPin, HIGH);    // schalte die LED an
    Serial.println( Status13 + "13 13 AN" );

  } 
  // Wenn nicht, schalte die LED aus:
  else
  {
    digitalWrite(ledPin, LOW);    // schalte die LED aus
    Serial.println( Status13 +  "0" );

  }
    if (Status14 == HIGH)// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> Schalter 14
  {     
    digitalWrite(ledPin, HIGH);    // schalte die LED an
    Serial.println( Status14 + "14 14 AN" );

  } 
  // Wenn nicht, schalte die LED aus:
  else
  {
    digitalWrite(ledPin, LOW);    // schalte die LED aus
    Serial.println( Status14 +  "0" );

  }
    if (Status15 == HIGH)// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> Schalter 15
  {     
    digitalWrite(ledPin, HIGH);    // schalte die LED an
    Serial.println( Status15 + "15 15 AN" );

  } 
  // Wenn nicht, schalte die LED aus:
  else
  {
    digitalWrite(ledPin, LOW);    // schalte die LED aus
    Serial.println( Status15 +  "0" );

  }
    if (Status16 == HIGH)// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> Schalter 16
  {     
    digitalWrite(ledPin, HIGH);    // schalte die LED an
    Serial.println( Status16 + "16 16 AN" );

  } 
  // Wenn nicht, schalte die LED aus:
  else
  {
    digitalWrite(ledPin, LOW);    // schalte die LED aus
    Serial.println( Status16 +  "0" );

  }
    if (Status17 == HIGH)// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> Schalter 17
  {     
    digitalWrite(ledPin, HIGH);    // schalte die LED an
    Serial.println( Status17 + "17 17 AN" );

  } 
  // Wenn nicht, schalte die LED aus:
  else
  {
    digitalWrite(ledPin, LOW);    // schalte die LED aus
    Serial.println( Status17 +  "0" );

  }
    if (Status18 == HIGH)// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> Schalter 18
  {     
    digitalWrite(ledPin, HIGH);    // schalte die LED an
    Serial.println( Status18 + "18 18 AN" );

  } 
  // Wenn nicht, schalte die LED aus:
  else
  {
    digitalWrite(ledPin, LOW);    // schalte die LED aus
    Serial.println( Status18 +  "0" );

  }
    if (Status19 == HIGH)// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> Schalter 19
  {     
    digitalWrite(ledPin, HIGH);    // schalte die LED an
    Serial.println( Status19 + "19 19 AN" );

  } 
  // Wenn nicht, schalte die LED aus:
  else
  {
    digitalWrite(ledPin, LOW);    // schalte die LED aus
    Serial.println( Status19 +  "0" );

  }
    if (Status20 == HIGH)// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> Schalter 20
  {     
    digitalWrite(ledPin, HIGH);    // schalte die LED an
    Serial.println( Status20 + "20 20 AN" );

  } 
  // Wenn nicht, schalte die LED aus:
  else
  {
    digitalWrite(ledPin, LOW);    // schalte die LED aus
    Serial.println( Status20 +  "0" );

  }
      delay(1000);
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
