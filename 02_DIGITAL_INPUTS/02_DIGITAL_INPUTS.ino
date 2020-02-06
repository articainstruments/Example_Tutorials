int BS_1_pin = 2;
int BS_2_pin = 3;
int BS_3_pin = 4;
int BS_4_pin = 5;

int BB_1_pin = 6;
int BB_2_pin = 7;
int BB_3_pin = 8;
int BB_4_pin = 9;

int D6R_1_pin = 14;
int D6R_2_pin = 15;
int D6R_3_pin = 16;
int D6R_4_pin = 17;


int TOOGLE_1_pin = 18;
int TOOGLE_2_pin = 19;
int TOOGLE_3_pin = 20;
int TOOGLE_4_pin = 21;


void setup() {
  Serial.begin(9600);

  pinMode(BS_1_pin, INPUT);
  pinMode(BS_2_pin, INPUT);
  pinMode(BS_3_pin, INPUT);
  pinMode(BS_4_pin, INPUT);

  pinMode(BB_1_pin, INPUT);
  pinMode(BB_2_pin, INPUT);
  pinMode(BB_3_pin, INPUT);
  pinMode(BB_4_pin, INPUT);

  pinMode(D6R_1_pin, INPUT);
  pinMode(D6R_2_pin, INPUT);
  pinMode(D6R_3_pin, INPUT);
  pinMode(D6R_4_pin, INPUT);

  pinMode(TOOGLE_1_pin, INPUT);
  pinMode(TOOGLE_2_pin, INPUT);
  pinMode(TOOGLE_3_pin, INPUT);
  pinMode(TOOGLE_4_pin, INPUT);

}

void loop() {

    read_TOOGLE();
}

void read_TOOGLE() {

  Serial.print(digitalRead(TOOGLE_1_pin));
  Serial.print("\t");
  Serial.print(digitalRead(TOOGLE_2_pin));
  Serial.print("\t");
  Serial.print(digitalRead(TOOGLE_3_pin));
  Serial.print("\t");
  Serial.print(digitalRead(TOOGLE_4_pin));
  Serial.println();
}

void read_D6R() {

  Serial.print(digitalRead(D6R_1_pin));
  Serial.print("\t");
  Serial.print(digitalRead(D6R_2_pin));
  Serial.print("\t");
  Serial.print(digitalRead(D6R_3_pin));
  Serial.print("\t");
  Serial.print(digitalRead(D6R_4_pin));
  Serial.println();
}

void read_BB() {

  Serial.print(digitalRead(BB_1_pin));
  Serial.print("\t");
  Serial.print(digitalRead(BB_2_pin));
  Serial.print("\t");
  Serial.print(digitalRead(BB_3_pin));
  Serial.print("\t");
  Serial.print(digitalRead(BB_4_pin));
  Serial.println();
}


void read_BS() {

  Serial.print(digitalRead(BS_1_pin));
  Serial.print("\t");
  Serial.print(digitalRead(BS_2_pin));
  Serial.print("\t");
  Serial.print(digitalRead(BS_3_pin));
  Serial.print("\t");
  Serial.print(digitalRead(BS_4_pin));
  Serial.println();

}
