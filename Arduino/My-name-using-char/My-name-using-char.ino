void setup() {
  Serial.begin(9600);
}

void loop() {
  // Define Morse code representations for each letter in "Jordi"
  char j[] = ".---";
  char o[] = "---";
  char r[] = ".-.";
  char d[] = "-..";
  char i[] = "..";

  // Print each letter
  Serial.print(j);
  Serial.print(" ");  // Space between letters
  Serial.print(o);
  Serial.print(" ");
  Serial.print(r);
  Serial.print(" ");
  Serial.print(d);
  Serial.print(" ");
  Serial.print(i);
  Serial.println();  // Newline for the end of the name

  // Delay to make Morse code readable 
  delay(1000);
}