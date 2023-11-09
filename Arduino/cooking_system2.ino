//coking system 2
//receipt: 2 eggs, 1 potato, 0.25 onion, oil
int eggs = 4;
int potato = 0;
bool oil = true;
double onion = 1;  //double es un numero decimal


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
  if (input == "potato") {
    potato++;
  }
}

void cook() {
  Serial.println("We are cooking Jessie");
  if (eggs >= 2 && potato >= 1 && onion >= 0.25 && oil) {
    Serial.println("you have a Spanish Omelete");
    eggs = eggs - 2;
    potato--;
    onion = onion - 0.25;
  }
}
