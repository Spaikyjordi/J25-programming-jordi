void setup() {
  Serial.begin(9600);
  for (int numeroProblema = 1; numeroProblema <= 100; numeroProblema++) {
    if (esImpar(numeroProblema) || esMultiploDeSeis(numeroProblema)) {
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

bool esImpar(int num) {
  return num % 2 != 0;
}

bool esMultiploDeSeis(int num) {
  return num % 6 == 0;
}

