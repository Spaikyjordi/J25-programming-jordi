//cooking system 1
void setup() {
  Serial.begin(9600);
}

void loop() {
  String input = Serial.readString();
  if (input != "") {
    Serial.println();
    Serial.print("Has esctrio: ");
    Serial.println(input);
    input.trim();
    decide(input);
  }
}

void decide(String input) {
  Serial.println("we are deciding");
  if (input == "cook") {
    cook();
  }
}

void cook() {
  Serial.println("We are cooking Jessie");
}