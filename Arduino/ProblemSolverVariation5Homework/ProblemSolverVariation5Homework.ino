void setup() {
  Serial.begin(9600);
  for (int numeroProblema = 1; numeroProblema <= 100; numeroProblema++) {
    if (numeroProblema%7==0) { //multiplos de 7
      resolverProblemaDibujo(numeroProblema);
    }
  }
}
  void loop() {
  }

  void resolverProblemaDibujo(int n) {  //data type, number
    Serial.print("Resolviendo problema");
    Serial.println(n);
  }
