const int analogGirisPin = A0;

const int analogCikisPin = 3;

int potansDeger = 0;

int ledDeger = 0;

void setup() {

}

void loop() {

  potansDeger = analogRead(analogGirisPin);
  ledDeger = map(potansDeger,0,1023,0,255);

  // Örnek map (5,0,10,0,100) = 50;

  analogWrite(analogCikisPin,ledDeger);
}
