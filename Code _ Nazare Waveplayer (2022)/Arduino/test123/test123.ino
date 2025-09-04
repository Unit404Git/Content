#include <SD.h>

File file;
const int schalter1 = 2;

int anOderAus[1];

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(schalter1, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  anOderAus[0] = digitalRead(schalter1);

  write_to_file();
}

void write_to_file() {
  SD.remove("input.txt");

  file = open("input.txt", FILE_WRITE);

  for(int value : anOderAus) {
    file.write(value + "\n");
  }

  file.close();
}
