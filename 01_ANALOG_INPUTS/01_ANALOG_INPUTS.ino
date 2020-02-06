byte analog_1_pin = A0;
byte analog_2_pin = A1;
byte analog_3_pin = A2;
byte analog_4_pin = A3;

byte analog_5_pin = A4;
byte analog_6_pin = A5;
byte analog_7_pin = A6;
byte analog_8_pin = A7;

byte analog_9_pin = A10;
byte analog_10_pin = A11;
byte analog_11_pin = A12;
byte analog_12_pin = A13;

byte analog_13_pin = A8;
byte analog_14_pin = A9;
byte analog_15_pin = A16;
byte analog_16_pin = A17;



void setup() {

  Serial.begin(9600);
  
}

void loop() {

  Serial.print(analogRead(analog_1_pin));
  Serial.print("\t");
  Serial.print(analogRead(analog_2_pin));
  Serial.print("\t");
  Serial.print(analogRead(analog_3_pin));
  Serial.print("\t");
  Serial.print(analogRead(analog_4_pin));
  Serial.print("\t");

  Serial.print(analogRead(analog_5_pin));
  Serial.print("\t");
  Serial.print(analogRead(analog_6_pin));
  Serial.print("\t");
  Serial.print(analogRead(analog_7_pin));
  Serial.print("\t");
  Serial.print(analogRead(analog_8_pin));
  Serial.print("\t");

  Serial.print(analogRead(analog_9_pin));
  Serial.print("\t");
  Serial.print(analogRead(analog_10_pin));
  Serial.print("\t");
  Serial.print(analogRead(analog_11_pin));
  Serial.print("\t");
  Serial.print(analogRead(analog_12_pin));
  Serial.print("\t");

  Serial.print(analogRead(analog_13_pin));
  Serial.print("\t");
  Serial.print(analogRead(analog_14_pin));
  Serial.print("\t");
  Serial.print(analogRead(analog_15_pin));
  Serial.print("\t");
  Serial.print(analogRead(analog_16_pin));
  Serial.println("\t");
  

}
