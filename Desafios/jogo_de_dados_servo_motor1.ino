#include <Servo.h>
Servo porta;
#define ledVermelho 7
#define ledVerde 10
#define ledsAzul1 4
#define ledsAzul2 3
#define ledsAzuis3 2

int acertos;

void desenhaCabecalho() {
  Serial.println("--- PROGRAMA JOGO DE DADOS ---");
  Serial.println();
  delay(500);
}

void desenhaPontinhos(int qtdPontos = 5, int tempo = 700) {
  for(int i = 1; i <= qtdPontos; i++) {
    Serial.print(".");
    delay(tempo);
  }
}

void setup() {
  Serial.begin(9600);
  randomSeed(analogRead(0));

  pinMode(ledVermelho, OUTPUT);
  pinMode(ledVerde, OUTPUT);
  pinMode(ledsAzul1, OUTPUT);
  pinMode(ledsAzul2, OUTPUT);
  pinMode(ledsAzul3, OUTPUT);
  
  
  
 

  porta.attach(12);
  porta.write(0);
}

void loop() {
  desenhaCabecalho();
  Serial.println("Digite um palpite entre 1 e 6:");
  while(!Serial.available());
  int palpite = Serial.parseInt();

  int numeroSorteado = random(1, 7);
  Serial.print("Jogando o dado ");
  desenhaPontinhos();

  Serial.println();
  Serial.println("Seu palpite: " + String(palpite));
  Serial.println("Numero sorteado: " + String(numeroSorteado));

  if(palpite == numeroSorteado) {
    Serial.println("Parabens voce acertou!");
    digitalWrite(ledVerde, HIGH);
    delay(1000);
    digitalWrite(ledVerde, LOW);

    if (acertos < 3) {
      digitalWrite(ledsAzul[acertos], HIGH);
      acertos++;
    }

    if (acertos == 3) {
      Serial.println("Voce conquistou a sabedoria suprema! Abrindo o portao...");
      porta.write(90);
    }
  } else {
    Serial.println("Voce Perdeu");
    digitalWrite(ledVermelho, HIGH);
    delay(1000);
    digitalWrite(ledVermelho, LOW);
  }

  Serial.println("Reiniciando o programa...");
  Serial.println();
  delay(1000);
}