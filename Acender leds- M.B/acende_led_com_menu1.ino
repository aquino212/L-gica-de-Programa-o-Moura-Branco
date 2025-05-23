
int ledVerde = 13;
int ledAmarelo = 11;
int ledVermelho = 9;
int opcao;
void setup()
{
  Serial.begin(9600);
  pinMode(ledVerde, OUTPUT);
  pinMode(ledAmarelo, OUTPUT);
  pinMode(ledVermelho, OUTPUT);
}

void loop()
{
  digitalWrite(ledVerde, HIGH);
  delay(5000); // Wait for 1000 millisecond(s)
  digitalWrite(ledVerde, LOW);
  delay(1000); // Wait for 1000 millisecond(s)

  digitalWrite(ledAmarelo, HIGH);
  delay(3000); // Wait for 1000 millisecond(s)
  digitalWrite(ledAmarelo, LOW);
  delay(1000); // Wait for 1000 millisecond(s)

  digitalWrite(ledVermelho, HIGH);
  delay(2000); // Wait for 1000 millisecond(s)
  digitalWrite(ledVermelho, LOW);
  delay(1000); // Wait for 1000 millisecond(s)

do {
    Serial.println("--- MENU ---");
    Serial.println(" Ligar Led Verde");
    Serial.println(" Desligar Led Verde");
    Serial.println(" Ligar Led Amarelo");
    Serial.println(" Desligar Led Amarelo");
    Serial.println(" Ligar Led Vermelho");
    Serial.println(" Desligar Led Vermelho");
    Serial.println(" Ligar Todos os Leds");
    Serial.println(" Desligar Todos os Leds");
    Serial.println(" Sair");
    Serial.println("Digite sua opcao: ");

    while(!Serial.available()); 
  

  
    opcao = Serial.parseInt();

    switch (opcao){
      case 1:
        digitalWrite(ledVerde, HIGH);
        Serial.println("Led Verde Ligado");
        break;
      case 2:
        digitalWrite(ledVerde, LOW);
        Serial.println("Led Verde Desligado");
        break;
      case 3:
        digitalWrite(ledAmarelo, HIGH);
        Serial.println("Led Amarelo Ligado");
        break;
      case 4:
        digitalWrite(ledAmarelo, LOW);
        Serial.println("Led Amarelo Desligado");
        break;
      case 5:
        digitalWrite(ledVermelho, HIGH);
        Serial.println("Led Vermelho Ligado");
        break;
      case 6:
        digitalWrite(ledVermelho, LOW);
        Serial.println("Led Vermelho Desligado");
        break;
      case 7:
        digitalWrite(ledVerde, HIGH);
        digitalWrite(ledAmarelo, HIGH);
        digitalWrite(ledVermelho, HIGH);
        Serial.println("Todos os Leds Ligados");
        break;
      case 8:
        digitalWrite(ledVerde, LOW);
        digitalWrite(ledAmarelo, LOW);
        digitalWrite(ledVermelho, LOW);
        Serial.println("Todos os Leds Desligados");
        break;
      case 9:
        Serial.println("Saindo do menu...");
        break;
      default:
        Serial.println("Opcao invalida!");
        break;
    }
  
  }
  while(opcao <= 8);
  
}  
  