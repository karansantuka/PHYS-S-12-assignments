int buttonState = 0;
int buttonPin = 13;

int ledpin1 = 2;
int ledpin2 = 3;
int ledpin3 = 4;
int ledpin4 = 5;

int motorpin = 11;

void setup() {
  // put your setup code here, to run once:
  pinMode(buttonPin, INPUT);
  for(int i = 2; i<6; i+=1) {
    pinMode(i, OUTPUT);
  }
}
void loop() {
  buttonState = digitalRead(buttonPin);
    if (buttonState == HIGH && millis() > 2000) {
      digitalWrite(ledpin1, HIGH);
      digitalWrite(ledpin2, LOW);
      digitalWrite(ledpin3, LOW);
      digitalWrite(ledpin4, LOW);
      analogWrite(motorpin, 100);
      delay(3000);
    }
    else if (buttonState == HIGH && millis() > 10000) {
      digitalWrite(ledpin2, HIGH);
      digitalWrite(ledpin1, LOW);
      digitalWrite(ledpin3, LOW);
      digitalWrite(ledpin4, LOW);
      analogWrite(motorpin, 190);
      delay(3000);
    }
    else if (buttonState == HIGH && millis() > 15000) {
      digitalWrite(ledpin3, HIGH);
      digitalWrite(ledpin2, LOW);
      digitalWrite(ledpin1, LOW);
      digitalWrite(ledpin4, LOW);
      analogWrite(motorpin, 255);
      delay(3000);
    }
    else {
      digitalWrite(ledpin4, HIGH);
      analogWrite(motorpin, 0);
    }
}
