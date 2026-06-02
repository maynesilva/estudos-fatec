int vermelho = 2;
int laranja = 3;
int amarelo = 4;
int verde = 5;
int azul = 6;
int valor;

void setup()
{
  pinMode(vermelho, OUTPUT);
  pinMode(laranja, OUTPUT);
  pinMode(amarelo, OUTPUT);
  pinMode(verde, OUTPUT);
  pinMode(azul, OUTPUT);
  pinMode(A0, INPUT);
}

void loop()
{
  valor = analogRead(A0);
  if (valor > 1000){
  digitalWrite(vermelho,LOW);
    digitalWrite(laranja, LOW);
    digitalWrite(amarelo, LOW);
    digitalWrite(verde, LOW);
    digitalWrite(azul, LOW);
  }
  if (valor > 800 and valor < 1000){
  digitalWrite(vermelho, HIGH);
  digitalWrite(laranja, LOW);
  digitalWrite(amarelo, LOW);
  digitalWrite(verde, LOW);
  digitalWrite(azul, LOW);
  }
  if (valor > 600 and valor < 800){
  digitalWrite(vermelho, HIGH);
  digitalWrite(laranja, HIGH);
  digitalWrite(amarelo, LOW);
  digitalWrite(verde, LOW);
  digitalWrite(azul, LOW);
  }
  if (valor > 400 and valor < 600){
  digitalWrite(vermelho, HIGH);
  digitalWrite(laranja, HIGH);
  digitalWrite(amarelo, HIGH);
  digitalWrite(verde, LOW);
  digitalWrite(azul, LOW);
  }
  if (valor > 200 and valor < 400){
   digitalWrite(vermelho, HIGH);
  digitalWrite(laranja, HIGH);
  digitalWrite(amarelo, HIGH);
  digitalWrite(verde, HIGH);
  digitalWrite(azul, LOW);
  }
  if (valor < 200){
  digitalWrite(vermelho, HIGH);
  digitalWrite(laranja, HIGH);
  digitalWrite(amarelo, HIGH);
  digitalWrite(verde, HIGH);
  digitalWrite(azul, HIGH);
  }
}