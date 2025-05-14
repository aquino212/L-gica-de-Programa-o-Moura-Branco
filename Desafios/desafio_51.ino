// C++ code
//
void setup()
{
 Serial.begin(9600);
  
  Serial.println("Numeros Pares");
  Serial.println();
int contadorWhile = 60;
 
 while (contadorWhile <= 80){
      Serial.println("Contando: " + String(contadorWhile));
  contadorWhile+= 2;
 
  } 
}

void loop()
{

}