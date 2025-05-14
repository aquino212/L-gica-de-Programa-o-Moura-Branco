// C++ code
//
void setup()
{
 Serial.begin(9600);
  
 int contadorWhile = 5;
 
 while (contadorWhile >= 1){
      Serial.println("Contando: " + String(contadorWhile));
  contadorWhile--;
  }
 
  
  
  
}

void loop()
{

}