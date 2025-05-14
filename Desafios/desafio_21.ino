// C++ code
//
void setup()
{
 Serial.begin(9600);
  
  int contadorWhile = 0;
 
 while (contadorWhile <= 100){
      Serial.println("Contando: " + String(contadorWhile));
  contadorWhile+= 5;
  }  

}

void loop()
{

}