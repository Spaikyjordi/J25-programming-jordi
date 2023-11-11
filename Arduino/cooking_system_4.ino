//coking system 4
//receipt: 1 masa pizza, 2 queso, 1 jamon dulce, oil, 2 tomate
int masaPizza = 0;
int queso = 0;
int jamonDulce = 1;
bool oil = true;
double tomate = 0.5;
//salad
int lettuce = 0;
int tomato = 0;
int cucumber = 0;
bool oliveOil = true;
int salt = 0;

void setup() {
  Serial.begin(9600);
}

void loop() {
  String input = Serial.readString();
  if (input != "") {
    Serial.println();
    Serial.print("Has esctrio: ");
    Serial.println(input);
    input.trim();  //trim=cut but the meaning is, he will delete the special characters
    decide(input);
  }
}

void decide(String input) {
  Serial.println("We are deciding");
  if (input == "cook") {
    cook();
  } else if (input == "masaPizza") {
    masaPizza++;
  } else if (input == "queso") {
    queso++;
  } else if (input == "jamonDulce") {
    jamonDulce++;
  } else if (input == "tomate") {
    tomate++;
  }
  if (input == "prepare") {
    prepareSalad();
  } else if (input == "lettuce") {
    lettuce++;
  } else if (input == "tomato") {
    tomato++;
  } else if (input == "cucumber") {
    cucumber++;
  } else if (input == "oliveOil") {
    oliveOil = true;
  } else if (input == "salt") {
    salt++;
  } else if (input == "show") {
    Serial.println("These are the ingredients that we have");
    Serial.print(lettuce);
    Serial.println(" lettuce ");
    Serial.println(tomato);
    Serial.println(" tomato");
    if (oliveOil) {
      Serial.println("We have oliveOil");
    } else {
      Serial.println("We don't have oliveOil");
    }
    Serial.print(masaPizza);
    Serial.println(" masaPizza ");
    Serial.println(queso);
    Serial.println(" queso");
    Serial.print(jamonDulce);
    Serial.println(" jamonDulce ");
    Serial.println(tomate);
    Serial.println(" tomate");
    if (oil) {
      Serial.println("We have oil");
    } else {
      Serial.println("We don't have oil");
    }
  }
}

void cook() {
  Serial.println("We are cooking Jessie");
  if (queso >= 2 && masaPizza >= 1 && tomate >= 0.5 && jamonDulce >= 1 && oil) {
    Serial.println("you have a Pizza");
    queso = queso - 2;
    masaPizza--;
    tomate = tomate - 0.5;
    jamonDulce--;
  }
}

void prepareSalad() {
  Serial.println("We are preparing salad");
  if (lettuce >= 2 && tomato >= 1 && cucumber >= 1 && oliveOil && salt >= 1) {
    Serial.println("You have a salad!");
    lettuce = lettuce - 2;
    tomato--;
    cucumber--;
    oliveOil = false;
    salt--;
  }
}
