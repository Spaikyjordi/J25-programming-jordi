int ZumbadorPin = 8; // definimos el pin al que conectaremos el zumbador.
 
int c=261; 
int d=294;
int e=329;
int f=349;
int g=391;
int gS=415;
int a=440;
int aS=455;
int b=466;
int cH=523;
int cSH=554;
int dH=587;
int dSH=622;
int eH=659;
int fH=698;
int fSH=740;
int gH=783;
int gSH=830;
int aH=880;
 
 
void setup()    
{    
 
  pinMode(ZumbadorPin, OUTPUT); // definimos la variable ZumbadorPin como una salida.
 
}    
     
void loop()   
{   
    tone(ZumbadorPin, g, 900);
    delay(900+50);
    tone(ZumbadorPin, a, 600);
    delay(600+50);     
    tone(ZumbadorPin, g, 300); 
    delay(300+50);
    tone(ZumbadorPin, e, 2400);  
    delay(2400+50);
    tone(ZumbadorPin, g, 900);
    delay(900+50); 
    
    tone(ZumbadorPin, a, 600);
    delay(600+50);
    tone(ZumbadorPin, g, 300);
    delay(300+50);
    tone(ZumbadorPin, e, 2400);
    delay(2400+50);
    tone(ZumbadorPin, d, 2400);   
    delay(2400+50);
   
    tone(ZumbadorPin, d, 600);
    delay(600+50);
    tone(ZumbadorPin, b, 2400);
    delay(2400+50);
    tone(ZumbadorPin, d, 2400); 
    delay(2400+50);   
    tone(ZumbadorPin, d, 600);
    delay(600+50); 
    tone(ZumbadorPin, g, 2400);
    delay(2400+50);
    
    tone(ZumbadorPin, a, 2400);
    delay(2400+50);
    tone(ZumbadorPin, a, 600);
    delay(600+50);
    tone(ZumbadorPin, c, 900);
    delay(900+50);
    tone(ZumbadorPin, b, 300);
    delay(300+50);
    
    tone(ZumbadorPin, a, 600);
    delay(600+50);
    tone(ZumbadorPin, g, 900);
    delay(900+50); 
    tone(ZumbadorPin, a, 300);
    delay(300+50);
    tone(ZumbadorPin, g, 600);
    delay(600+50);
    tone(ZumbadorPin, e, 2400); 
    delay(2400+50);
    tone(ZumbadorPin, a, 2400);
    delay(2400+50);
    
    tone(ZumbadorPin, a, 600);
    delay(600+50);
    tone(ZumbadorPin, c, 900);
    delay(900+50);    
    tone(ZumbadorPin, b, 300);
    delay(300+50);


    tone(ZumbadorPin, a, 600);
    delay(600+50);    
    tone(ZumbadorPin, g, 900); 
    delay(900+50); 
    tone(ZumbadorPin, a, 300); 
    delay(300+50); 
    tone(ZumbadorPin, g, 600);
    delay(600+50);  
    
    
    tone(ZumbadorPin, e, 2400);
    delay(2400+50);  
    tone(ZumbadorPin, d, 2400); 
    delay(2400+50); 
    tone(ZumbadorPin, d, 600); 
    delay(600+50);     
    tone(ZumbadorPin, f, 900); 
    delay(900+50); 
    tone(ZumbadorPin, d, 300); 
    delay(300+50); 
    tone(ZumbadorPin, b, 600); 
    delay(600+50); 
    tone(ZumbadorPin, c, 2400);
    delay(2400+50); 
    
    tone(ZumbadorPin, e, 2400); 
    delay(2400+50);
    tone(ZumbadorPin, c, 600);  
    delay(600+50);
    tone(ZumbadorPin, g, 600); 
    delay(600+50);
    tone(ZumbadorPin, e, 600); 
    delay(600+50);
 
    
    tone(ZumbadorPin, g, 900);
    delay(900+50);
    tone(ZumbadorPin, f, 300); 
    delay(300+50);
    tone(ZumbadorPin, d, 600);
    delay(600+50);
    tone(ZumbadorPin, c, 2600);
    delay(2400+50);
    tone(ZumbadorPin, c, 2400);
    delay(2400+50); 

    delay(600+50);
   
 
    delay(2000);  // dos segundos para volver a empezar.
}