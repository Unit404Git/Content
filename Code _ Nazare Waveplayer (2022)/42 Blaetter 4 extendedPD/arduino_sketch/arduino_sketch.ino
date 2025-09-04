//long lastMillis = 0;
//long loops = 0;


// every item of this represents a pin number corresponding to the lever
int all_levers[43];

// every item of this represents the status of the corresponding lever
int all_stati[43];

// this function initiates all levers - at the end every lever is mapped to its pin
void setup_levers() {
  //all_levers[0] = 78;
  //all_levers[1] = 77;
  //all_levers[2] = 76;
  //all_levers[3] = 75;
  //all_levers[4] = 74;
  //all_levers[5] = 73;
  //all_levers[6] = 72;
  //all_levers[7] = 71;
  //all_levers[8] = 60;
  //all_levers[9] = 59;
  //all_levers[10] = 58;
  //all_levers[11] = 57;
  //all_levers[12] = 56;
  //all_levers[13] = 55;
  //all_levers[14] = 54;
  //all_levers[15] = 53;
  //all_levers[16] = 50;
  //all_levers[17] = 70;
  //all_levers[18] = 52;
  //all_levers[19] = 51;
  //all_levers[20] = 42;
  //all_levers[21] = 41;
  //all_levers[22] = 40;
  //all_levers[23] = 39;
  //all_levers[24] = 38;
  //all_levers[25] = 37;
  //all_levers[26] = 36;
  //all_levers[27] = 35;
  //all_levers[28] = 22;
  //all_levers[29] = 21;
  //all_levers[30] = 20;
 // all_levers[31] = 19;
 // all_levers[32] = 6;
 // all_levers[33] = 7;
  //all_levers[34] = 1;
  //all_levers[35] = 5;
  //all_levers[36] = 15;
  //all_levers[37] = 16;
  //all_levers[38] = 17;
  //all_levers[39] = 18;
  //all_levers[40] = 23;
  //all_levers[41] = 24;

  all_levers[0] = 22;
  all_levers[1] = 23;
  all_levers[2] = 24;
  all_levers[3] = 25;
  all_levers[4] = 26;
  all_levers[5] = 27;
  all_levers[6] = 28;
  all_levers[7] = 29;
  all_levers[8] = 30;
  all_levers[9] = 31;
  all_levers[10] = 32;
  all_levers[11] = 33;
  all_levers[12] = 34;
  all_levers[13] = 35;
  all_levers[14] = 36;
  all_levers[15] = 37;
  all_levers[16] = 38;
  all_levers[17] = 39;
  all_levers[18] = 40;
  all_levers[19] = 41;
  all_levers[20] = 42;
  all_levers[21] = 43;
  all_levers[22] = 44;
  all_levers[23] = 45;
  all_levers[24] = 46;
  all_levers[25] = 47;
  all_levers[26] = 48;
  all_levers[27] = 49;
  all_levers[28] = 55;
  all_levers[29] = 56;
  all_levers[30] = 57;
  all_levers[31] = 58;
  all_levers[32] = 2;
  all_levers[33] = 3;
  all_levers[34] = 4;
  all_levers[35] = 5;
  all_levers[36] = 6;
  all_levers[37] = 7;
  all_levers[38] = 14;
  all_levers[39] = 15;
  all_levers[40] = 16;
  all_levers[41] = 17;
  
  //Serial.println("Successfully set up levers");
}

// this function checks the status of each lever and creates the needed array with 1's and 0's
void read_status() {
  
  for(int i = 0; i < 42; i++) {
    int stat = digitalRead(all_levers[i]);
    if (stat == HIGH) {
      all_stati[i] = 1;
    } else {
      all_stati[i] = 0;
    } 
  }
  all_stati[42] = 9;
}


// this method gets called once each time the application gets started
void setup() {

   // set up baud rate
  Serial.begin(9600);

  for(int i = 0; i < 43; i++) {
    all_levers[i] = 0;
    all_stati[i] = 0;
  }
  setup_levers();

  // for debugging purposes this prints the first array created to the arduino serial monitor
  //for (int item : all_stati) {
    //Serial.print(String(item) + ",");
  //}
  //Serial.println("");
  
}


// this method gets 
void loop() {

  //long currentMillis = millis();
  //loops++;

  for(int i = 0; i < 43; i++) {
    all_stati[i] = 0;
  }
  
   
  read_status();

  //for (int item : all_stati) {
    //Serial.print(String(item) + ",");
  //}
  //Serial.println("");
  //Serial.write((uint8_t*)all_stati, sizeof(all_stati));

  for (int i = 0; i < 43; i++) {
    //Serial.print(String(all_stati[i]) + " sof:  " + String(i) + ", ");
    Serial.write(all_stati[i]);
  }
  //Serial.println("");
  
  delay(250);
  
  //if(currentMillis - lastMillis > 1000){
    //Serial.print("Loops last second:");
    //Serial.println(loops);
    
    //lastMillis = currentMillis;
    //loops = 0;
  //}

}
