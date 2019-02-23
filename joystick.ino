void setup() {
  // put your setup code here, to run once:
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(A5, INPUT);
  Serial.begin(9600);
}

void loop() {
    int ldr = analogRead(A5);

   Serial.println(ldr);
   
    if (ldr >= 400) {
      digitalWrite(2, HIGH);
      digitalWrite(3, LOW);
      digitalWrite(4, LOW);
    } else if (ldr <= 400 && ldr >= 200) {
      digitalWrite(2, LOW);
      digitalWrite(3, HIGH);
      digitalWrite(4, LOW);
    }
    if (ldr <= 200) {
      digitalWrite(2, LOW);
      digitalWrite(3, LOW);
      digitalWrite(4, HIGH);
    }
}
