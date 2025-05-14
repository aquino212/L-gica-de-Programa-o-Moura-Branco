float nota1, nota2, media;
int frequencia;

void setup() {
  Serial.begin(9600);
  Serial.println("Avaliacao de Aluno");
  Serial.println("Digite a primeira nota:");
}

void loop() {
  if (Serial.available()) {
    
    nota1 = Serial.parseFloat();
    Serial.print("Nota 1: ");
    Serial.println(nota1);

    Serial.println("Digite a segunda nota:");
    while (Serial.available() == 0) {}
    nota2 = Serial.parseFloat();
    Serial.print("Nota 2: ");
    Serial.println(nota2);

    
    media = (nota1 + nota2) / 2;

    
    Serial.println("Digite a frequencia (em %):");
    while (Serial.available() == 0) {}
    frequencia = Serial.parseInt();
    Serial.print("Frequencia: ");
    Serial.print(frequencia);
    Serial.println("%");

    delay(1000);

    Serial.print("Media: ");
    Serial.println(media);

    if (media == 10) {
      Serial.println("Parabens Nota maxima!");
    }

    if (media >= 6 && frequencia >= 75) {
      Serial.println("APROVADO");
    } else if (media < 6 && frequencia < 75) {
      Serial.println("REPROVADO por nota e frequencia");
    } else if (media < 6) {
      Serial.println("REPROVADO por nota");
    } else if (frequencia < 75) {
      Serial.println("REPROVADO por frequencia");
    }

    Serial.println(" NOVA AVALIACAO ");
    Serial.println("Digite a primeira nota:");
    
    delay(2000);  
  }
}
