const int buzzer = 9;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(6, INPUT);

  pinMode(buzzer, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if (digitalRead(6) == HIGH) {
    Serial.println("Active");
    
  // Code for buzzer to emit sound
    tone(buzzer; 1000);
    delay(1000);
    noTone(buzzer);
    delay(1000);
  }
  else {
    Serial.println("Inactive");
  }



}
