

int TabuadaEscolhida;
int resultado;
  
  
void setup() {
  Serial.begin(9600);
}

void loop() {
  Serial.println("Diga qual tabuada voce quer:");
  while (!Serial.available()) {}
  TabuadaEscolhida = Serial.parseInt();
  
  for (int contador = 1;contador  <= 10; contador++) {
   resultado = TabuadaEscolhida * contador;
     
     Serial.print("Tabuada Escolhida: ");
    Serial.print(TabuadaEscolhida);
   Serial.print(" x ");
    Serial.print(contador);
    Serial.print(" = ");
    Serial.println(resultado);
  }
  delay(1000); 
}

    