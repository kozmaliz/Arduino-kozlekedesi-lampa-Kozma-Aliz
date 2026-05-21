int piros = 13;
int sarga = 12;
int zold = 11;

int kapcsolo = 2;

void setup()
{
  pinMode(piros, OUTPUT);
  pinMode(sarga, OUTPUT);
  pinMode(zold, OUTPUT);

  pinMode(kapcsolo, INPUT);
}

void loop()
{
  int allapot = digitalRead(kapcsolo);

  if (allapot == HIGH)
  {
    // Sárga villogás
    digitalWrite(piros, LOW);
    digitalWrite(zold, LOW);

    digitalWrite(sarga, HIGH);
    delay(300);
    digitalWrite(sarga, LOW);
    delay(300);
  }
  else
  {
    // normál lámpa

    digitalWrite(zold, HIGH);
    digitalWrite(sarga, LOW);
    digitalWrite(piros, LOW);
    delay(3000);

    digitalWrite(zold, LOW);
    digitalWrite(sarga, HIGH);
    delay(1000);

    digitalWrite(sarga, LOW);
    digitalWrite(piros, HIGH);
    delay(3000);

    digitalWrite(sarga, HIGH);
    delay(1000);

    digitalWrite(sarga, LOW);
  }
}
