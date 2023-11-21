  void setup(){
	Serial.begin(9600);
  int numeroProblema = 1; //first problem to solve
	while(numeroProblema<=30){
		resolverProblemaDibujo(numeroProblema);
		numeroProblema++;
	}
}
void loop(){
	
}
void resolverProblemaDibujo(int n){ //data type, number
	Serial.print("Resolviendo problema");
	Serial.println(n);
}
