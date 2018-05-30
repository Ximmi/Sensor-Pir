
int ct=15;
int pirPin=2;
int ledPin=13;
//int buzzerPin=10;
void setup() {
  Serial.begin(9600);
  pinMode(pirPin, INPUT);
  pinMode(ledPin, OUTPUT);
 // pinMode(buzzerPin, OUTPUT);
  digitalWrite(pirPin, LOW);
  digitalWrite(ledPin, LOW);
  //digitalWrite(buzzerPin, LOW);

  Serial.println("Espere, el sensor se está calibrando...");
    for(int i=0; i<=ct; i++){
     Serial.print(((i*100)/ct));
     Serial.print("% ");
     Serial.println("Completado...");
     delay(50);
    }

}

void loop() {
  if(digitalRead(pirPin)== HIGH){
    digitalWrite(ledPin, HIGH);
    //digitalWrite(buzzerPin, HIGH);
    Serial.println(".-.-.-.-.-.-.-.-.-.-.-.-.");
    Serial.println("¡Movimiento detectado!");
    Serial.println(".-.-.-.-.-.-.-.-.-.-.-.-.");
    delay(1000);   
  }
  else{
    digitalWrite(ledPin, LOW);
    //digitalWrite(buzzerPin, LOW); 
   }
  
}
