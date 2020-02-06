int led1_pin = 3;
int led2_pin = 4;
int led3_pin = 5;
int led4_pin = 6;

byte fader1_pin = A0;
byte fader2_pin = A1;
byte fader3_pin = A2;
byte fader4_pin = A3;

int fader1_val, fader2_val ,fader3_val, fader4_val;

void setup() {
  Serial.begin(9600);
  pinMode(led1_pin, OUTPUT);
  pinMode(led2_pin, OUTPUT);
  pinMode(led3_pin, OUTPUT);
  pinMode(led4_pin, OUTPUT);
}

void loop() {

  fader1_val = analogRead(fader1_pin) / 4;
  fader2_val = analogRead(fader2_pin) / 4;
  fader3_val = analogRead(fader3_pin) / 4;
  fader4_val = analogRead(fader4_pin) / 4;

  analogWrite(led1_pin, fader1_val);
  analogWrite(led2_pin, fader2_val);
  analogWrite(led3_pin, fader3_val);
  analogWrite(led4_pin, fader4_val);


  Serial.print(fader1_val);
  Serial.print("\t");
  Serial.print(fader2_val);
  Serial.print("\t");
  Serial.print(fader3_val);
  Serial.print("\t");
  Serial.print(fader4_val);
  Serial.println();
  
}
