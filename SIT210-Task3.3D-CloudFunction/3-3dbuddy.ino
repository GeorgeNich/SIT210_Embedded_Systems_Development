// Led for the wave or pat value 
int wavez = D2; // wave led pin, 
int patz = D5; // pat led pin

int wave = 300;     // // Wave delay value
int pat = 1000;  // pat delay value to be used

void setup() {
// LED set up for output
    pinMode(wavez, OUTPUT); //D2
    pinMode(patz, OUTPUT);  //D5

// subscribing to particle that is publishing via an event name  using handler identifier Subhandler to refer to later
    Particle.subscribe("Deakin_RIOT_SIT210_Photon_Buddy", SubHandler);

}

void loop() {
        
//create A fake publish event
delay(5000);
Particle.publish("Deakin_RIOT_SIT210_Photon_Buddy", "wave");
delay(5000);
Particle.publish("Deakin_RIOT_SIT210_Photon_Buddy", "pat");
delay(5000);

}



void SubHandler(const char *event, const char *data){ // subhandler takes in the event name and the data passed into it
    
    
    if(strcmp(data, "wave")==0)  // compare value at data for the value "wave" as char if same will return 0
    {   
    
        
        
        digitalWrite(wavez, HIGH);      // Blink the green wave led 3 times using the predefined delay value "wave"
        delay(wave);
        digitalWrite(wavez, LOW);
        delay(wave);
        digitalWrite(wavez, HIGH);
        delay(wave);
        digitalWrite(wavez, LOW);
        delay(wave);
        digitalWrite(wavez, HIGH);
        delay(wave);
        digitalWrite(wavez, LOW);
        delay(wave);
        
        
        
    }else if(strcmp(data,"pat") == 0) // compare the value at data for the value pat, if same will return 0
    {      
    
        
        
        for(int i=0; i<10; i++)
        {
        digitalWrite(patz, HIGH);
        delay(pat);                         // Blink the yellow wave led 10 times using the predefined delay value "pat"
        digitalWrite(patz, LOW);
        delay(pat);
        }
        
    
    }
    
}
    
