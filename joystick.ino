void setup() {
  // put your setup code here, to run once:
  pinMode(A0, INPUT);
  pinMode(A1, INPUT);
  Serial.begin(9600);
}

void loop() {
    int horizontal = analogRead(A0);
    int vertical = analogRead(A1);
    
   Serial.println("Horizontal: ") ;
   Serial.println(String(horizontal));
   Serial.println(" - Vertical: ");
   Serial.println( String(vertical));
   Serial.println("-------");   
   delay(1000);
}
