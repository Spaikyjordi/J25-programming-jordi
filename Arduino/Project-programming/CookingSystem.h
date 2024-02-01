//coking system 2 own recepie
//receipt: 1 masa pizza, 2 queso, 1 jamon dulce, oil, 2 tomate
int masaPizza = 5;
int queso = 5;
int jamonDulce = 5;
bool oil = true;
double tomate = 5;

void cookSomething() {
   String input = Serial.readString();
  if (input != "") {
    Serial.println();
    Serial.print("Has esctrio: ");
    Serial.println(input);
    input.trim();
    //decide(input);
  }
  Serial.println("We are cooking something Jessie... ");
  if (queso >= 2 && masaPizza >= 1 && tomate >= 0.5 && jamonDulce >= 1 && oil) {
    Serial.println("It is a Pizza!!!");
    queso = queso - 2;
    masaPizza--;
    tomate = tomate - 0.5;
    jamonDulce--;
  }
}
void decide2(String input) {
  Serial.println("We are deciding");
  if (input == "cook") {
    cookSomething();
  }
  if (input == "masaPizza") {
    masaPizza++;
  }
  if (input == "queso") {
    queso++;
  }
  if (input == "jamonDulce") {
    jamonDulce++;
  }
  if (input == "tomate") {
    tomate++;
  }
}


