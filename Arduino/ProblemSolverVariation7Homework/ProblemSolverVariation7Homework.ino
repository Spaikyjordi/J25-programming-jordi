void setup() {
  Serial.begin(9600);
  for (int numeroProblema = 1; numeroProblema <= 100; numeroProblema++) {
    if (endsWithSixOrThree(numeroProblema)) {
      resolverProblemaDibujo(numeroProblema);
    }
  }
}

void loop() {
}

void resolverProblemaDibujo(int n) {
  Serial.print("Resolviendo problema ");
  Serial.println(n);
}

bool endsWithSixOrThree(int num) {
  int lastDigit = num % 10;
  return lastDigit == 6 || lastDigit == 3;
}