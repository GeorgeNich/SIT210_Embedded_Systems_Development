
int ledonboard = D7;
void setup() {
    
    pinMode(ledonboard, OUTPUT);
 
    Particle.function("alarmhtml",Alarm);
}





void loop() {
    
    
}







int Alarm(String value){
    
if (value == "Alert"){
  Particle.publish("Triggered", "Yes", PRIVATE);
  
  delay(1000);
  digitalWrite(ledonboard, HIGH);
  delay(5000);
  digitalWrite(ledonboard, LOW);
  delay(3000);
 
  Particle.publish("Triggered", "Yes", PRIVATE);
     
  delay(1000);
  digitalWrite(ledonboard, HIGH);
  delay(5000);
  digitalWrite(ledonboard, LOW);
  delay(3000);
  
  Particle.publish("Triggered", "Yes", PRIVATE);
  
  delay(1000);
  digitalWrite(ledonboard, HIGH);
  delay(5000);
  digitalWrite(ledonboard, LOW);
  delay(3000);
 
  Particle.publish("Triggered", "Yes", PRIVATE);
     
  delay(1000);
  digitalWrite(ledonboard, HIGH);
  delay(5000);
  digitalWrite(ledonboard, LOW);
  delay(3000);
  
  
        
        return 1;
        
    }

}