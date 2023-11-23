void setup() {
  Serial.begin(9600);
  for (int numeroProblema = 1; numeroProblema <= 100; numeroProblema++) {
    if (sumaPar(numeroProblema)) {
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

bool sumaPar(int num) {
  if (num == 100){
      return false;
    }
  int unidades = num%10;
  int decenas = (num/10)%10;
  int suma = unidades+decenas
  if(suma%2==0){
    return true;
  }
  else{
    retun false;
  }
}