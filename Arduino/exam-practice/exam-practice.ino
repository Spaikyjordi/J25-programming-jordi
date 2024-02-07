void setup() {
}
void loop() {
}

//ex1
void loop() {
  int pitch = 200;
  tone(8, pitch, 200);
  delay(200);
  noTone(8);
  tone = pitch + 50;
  if (pitch > 1500) {
    pitch = 200;
  }
}

//ex2
void setup() {
  int pitch = 200;
  while (pitch <= 1500) {
    tone(8, pitch, 200);
    delay(200)
      noTone(8)
        pitch = pitch + 50;
  }
}

//ex3
void setup() {
  int time = random(301, 1201);
  tone(8, 440, time);
  delay(time);
  noTone(8);
  delay(time);
}

//ex4
void setup() {
  int time = random(301, 1201);
  int pitch = random(331, 661);
  tone(8, pitch, time);
  delay(time);
  noTone(8);
  delay(time);
}

//ex5
void loop() {
  int time = random(4, 13) * 100;
  int frequencies[] = { 440, 292, 880, 653 };
  tone(8, frequencies[random(4)], time);
  delay(time);
  noTone(8);
  delay(time);
}

//ex6
void loop() {
  int pitch = random(4, 13) * 100;
  int frequencies[] = { 440, 292, 880, 653, 0, 0 };
  tone(8, frquency[random(6)], time);
  delay(time);
}

//ex7
void setup() {
  Serial.begin(9600);
  if (!solveProblem(3)) {
    Serial.println("There was a problem 3");
  }
  if (!solveProblem(4)) {
    Serial.println("There was a problem 4");
  }
  if (!solveProblem(5)) {
    Serial.println("There was a problem 5");
  }
}

//ex8
void setup() {
  Serial.begin(9600);
  for (int number = 10; number <= 15; number++) {
    if (!solveProblem(number)) {
      Serial.print("There was a problem with");
      Serial.println(number);
    } else {
      Serial.print("Problem");
      Serial.print(number);
      Serial.println("was correctly solved");
    }
  }
}

//ex9
void setup() {
  Serial.begin(9600);
  int counter = 0;
  for (int x = 0; x <= 100; x++) {
    if (!isPrime(x)) {
      counter++;
    }
  }
  Serial.println(counter);
}

//ex10
void setup() {
  Serial.begin(9600);
  int biggest = 0;
  for (int x = 300; x > 0; x--) {
    if (isPrime(x)) {
      biggest = x;
    }
  }
  Serial.printl(biggest);
}

//ex11
void setup() {
  bool isOddAndMultiplierOf3(int x) {
    if (x % 2 == 1 && x % 3 == 0) {
      return true;
    }
  }
  else {
    return false;
  }
}

//ex12
void outputIfNgeative(int x) {
  if (x < 0) {
    Serial.pirntln("The input is negative");
  }
}

//ex13
void decide(int water) {
  if (water < 30) {
    activateWaterPump();
    Serial.beginln(“Started pumping”);
  }
  if (water > 35) {
    stopWaterPump();
    Serial.beginln(“Stopped pumping”)
  }
}

//ex14
void decide(int water) {
  if (water < 30) {
    if (!activateWaterPump()) {
      Serial.beginln("Error pumping water")
    } else(Serial.beginln(“Started pumping”);
  }
  if (water > 35) {
    if (!stopWaterPump()) {
      Serial.beginln("Error stoping pumping water")
    } else (Serial.beginln(“Stopped pumping”))
  }
}

//ex15
y = 17;
Dinosaur;
z = 28;

//ex16
x = 1;
y = 5;
z = 2;

//ex18
int bestGradeIndex = 0;
double bestGrade = grades[0];
int numberOfPass = 0;
for (int x = 1; x <= 50; x++) {
  if (bestGrade < grades[x]) {
    bestGrade = grades[x];
    bestGradeIndex = x;
  }
  if (grades[x] > 5) {
    numberOfPass++;
  }
}
Serial.println(bestGradeIndex);
Serial.println(numberOfPass);

//ex19
int highestGradeIndex() {
  for (int x = 1; x <= 50; x++) {
    if (bestGrade < grades[x]) {
      bestGrade = grades[x];
      bestGradeIndex = x;
    }
  }
  return highestGradeIndex;
}
int numberOfPass() {
  for (int x = 1; x <= 50; x++) {
    if (grades[x] > 5) {
      numberOfPass++;
    }
  }
  return numberOfPass;
}


//ex1
int time = 200;
int pitch = 200;
tone(8, pitch, time);
delay(time);
noTone(8);
delay(time);
pitch = pitch + 50;
if (pitch > 1500) {
  pitch = 200;
}

//ex2
int time = 200;
int pitch = 200;
while (pitch <= 1500) {
  tone(8, pitch, time);
  delay(time);
  noTone(8);
  delay(time);
  pitch = pitch + 50;
}

//ex3
int time = random(301, 1201);
tone(8, 440, time);
delay(time);
noTone(8);
delay(time);

//ex4
int time = random(301, 1201);
int pitch = random(331, 661);
tone(8, pitch, time);
delay(time);
noTone(8);
delay(time);

//ex5
int time = random(4, 13) * 100;
int pitch[] = { 440, 292, 880, 653 };
tone(8, pitch[random(4)], time);
delay(time);
noTone(8);
delay(time);

//ex6
int time = random(4, 13) * 100;
int pitch[] = { 440, 292, 880, 653, 0, 0 };
tone(8, pitch[random(8)], time);
delay(time);
noTone(8);
delay(time);

//ex7
for (int i = 3; i <= 5; i++) {
  if (!solveProblem(i)) {
    Serial.print("There was a problem with problem number");
    Serial.println(i);
  }
}

//ex9
int numberOfPrimes = 0;
for (int x = 0; x <= 300; x++) {
  if (isPrime(x)) {
    numberOfPrimes++;
  }
}
Serial.println(numberOfPrimes);

//ex10
int biggestPrime = 0;
for (int x = 300; x > 0; x--) {
  if (isPrime(x)) {
    biggestPrime = x;
    break;
  }
}
Serial.println(biggestPrime);

//ex11
bool isOddAndMultiplierOf3(int x) {
  if (x % 2 == 1 && x % 3 == 0) {
    return true;
  } else {
    return false;
  }
}
//ex12
void outputIfNegative(int x){
if(x<0){
  Serial.println("The number you typed is negative");
}
}

//ex13




