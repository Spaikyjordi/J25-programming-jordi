void setup() {
  Serial.begin(9600);
}

void loop() {
  morseJ();
  morseO();
  morseR();
  morseD();
  morseI();
  Serial.println();
  delay(1000);
}

void morseJ() {
  morseDot();
  morseDash();
  morseDash();
  morseDash();
  Serial.print("/");
}
void morseO() {
  morseDash();
  morseDash();
  morseDash();
  Serial.print("/");
}
void morseR() {
  morseDot();
  morseDash();
  morseDot();
  Serial.print("/");
}
void morseD() {
  morseDash();
  morseDot();
  morseDot();
  Serial.print("/");
}
void morseI() {
  morseDot();
  morseDot();
  Serial.print("/");
}
void morseDot() {
  Serial.print(".");
}
void morseDash() {
  Serial.print("-");
}