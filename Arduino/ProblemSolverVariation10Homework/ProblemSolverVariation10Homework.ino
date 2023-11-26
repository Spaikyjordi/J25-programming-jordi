void setup() {
  Serial.begin(9600);
  for (int numeroProblema = 1; numeroProblema <= 100; numeroProblema++) {
    if (sumaDigitos(numeroProblema) == 10 || sumaDigitos(numeroProblema) == 5) {
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

int sumaDigitos(int num) {
  int suma = 0;
  while (num != 0) {
    suma += num % 10;
    num /= 10;
  }
  return suma;
}