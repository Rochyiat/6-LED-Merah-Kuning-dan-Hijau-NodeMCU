const int greenLED1 = D0;
const int yellowLED1 = D1;
const int redLED1 = D2;
const int greenLED2 = D3;
const int yellowLED2 = D4;
const int redLED2 = D5;

void setup() {
  pinMode(greenLED1, OUTPUT);
  pinMode(yellowLED1, OUTPUT);
  pinMode(redLED1, OUTPUT);
  pinMode(greenLED2, OUTPUT);
  pinMode(yellowLED2, OUTPUT);
  pinMode(redLED2, OUTPUT);
}

void loop() {
  // Pola 1: Nyalakan semua LED satu per satu dengan jeda cepat
  digitalWrite(greenLED1, HIGH);
  digitalWrite(greenLED2, HIGH);
  delay(300);
  digitalWrite(yellowLED1, HIGH);
  digitalWrite(yellowLED2, HIGH);
  delay(300);
  digitalWrite(redLED1, HIGH);
  digitalWrite(redLED2, HIGH);
  delay(300);

  // Matikan semua LED satu per satu dengan jeda cepat
  digitalWrite(greenLED1, LOW);
  digitalWrite(greenLED2, LOW);
  delay(200);
  digitalWrite(yellowLED1, LOW);
  digitalWrite(yellowLED2, LOW);
  delay(200);
  digitalWrite(redLED1, LOW);
  digitalWrite(redLED2, LOW);
  delay(200);

  // Pola 2: Berkedip cepat semua LED bersamaan
  for (int i = 0; i < 3; i++) {
    digitalWrite(greenLED1, HIGH);
    digitalWrite(greenLED2, HIGH);
    digitalWrite(yellowLED1, HIGH);
    digitalWrite(yellowLED2, HIGH);
    digitalWrite(redLED1, HIGH);
    digitalWrite(redLED2, HIGH);
    delay(150);
    digitalWrite(greenLED1, LOW);
    digitalWrite(greenLED2, LOW);
    digitalWrite(yellowLED1, LOW);
    digitalWrite(yellowLED2, LOW);
    digitalWrite(redLED1, LOW);
    digitalWrite(redLED2, LOW);
    delay(150);
  }

  // Pola 3: Nyalakan LED dengan efek bergelombang
  for (int i = 0; i < 2; i++) {
    digitalWrite(greenLED1, HIGH);
    digitalWrite(greenLED2, HIGH);
    delay(100);
    digitalWrite(greenLED1, LOW);
    digitalWrite(greenLED2, LOW);
    digitalWrite(yellowLED1, HIGH);
    digitalWrite(yellowLED2, HIGH);
    delay(100);
    digitalWrite(yellowLED1, LOW);
    digitalWrite(yellowLED2, LOW);
    digitalWrite(redLED1, HIGH);
    digitalWrite(redLED2, HIGH);
    delay(100);
    digitalWrite(redLED1, LOW);
    digitalWrite(redLED2, LOW);
  }

  // Pola 4: Nyalakan dan matikan semua LED secara perlahan
  digitalWrite(greenLED1, HIGH);
  digitalWrite(greenLED2, HIGH);
  digitalWrite(yellowLED1, HIGH);
  digitalWrite(yellowLED2, HIGH);
  digitalWrite(redLED1, HIGH);
  digitalWrite(redLED2, HIGH);
  delay(500);
  digitalWrite(greenLED1, LOW);
  digitalWrite(greenLED2, LOW);
  digitalWrite(yellowLED1, LOW);
  digitalWrite(yellowLED2, LOW);
  digitalWrite(redLED1, LOW);
  digitalWrite(redLED2, LOW);
  delay(500);
}
