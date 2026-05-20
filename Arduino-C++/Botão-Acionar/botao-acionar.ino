// C++ code
//
void setup()
{
  pinMode (2, INPUT); //configura pin2 como entrada
  pinMode(13, OUTPUT); //configura pin13 como saida
}

void loop()
{
  if (digitalRead(2)) //se o botão for pressionado
  {
  digitalWrite(13, HIGH);//liga led
  }
  else { //senao
  digitalWrite(13, LOW); //fica default
  }
  delay(250);
}