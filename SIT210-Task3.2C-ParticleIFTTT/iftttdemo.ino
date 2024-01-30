int photoresistor = A4 ; //photoresistor A0 Analogue pin value
int analogueaverage = 50;
int analoguevalue = 0;

int led = D7; //onboard led 

void setup() {
    
 pinMode(led, OUTPUT);
 pinMode(photoresistor,INPUT);
 
} 


void loop() { 

 analoguevalue = analogRead(photoresistor);
 delay(5000);

   if (analogueaverage < analoguevalue) 
   { 
       digitalWrite(led, HIGH);
       Particle.publish("Light_Exposure_High", "Sunlight", PRIVATE);
       delay(5000);
   } 
   else 
   {
       digitalWrite(led, LOW);
       Particle.publish("Light_Exposure_Low", "No_Sunlight", PRIVATE); 
        delay(5000);
    } 
}