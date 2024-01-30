

int greenLed = D2;
int yellowLed = D5;
int redLed = D3;




void setup() {
    
    pinMode(yellowLed, OUTPUT);
    pinMode(greenLed, OUTPUT);
    pinMode(redLed, OUTPUT);

    Particle.function("ledhtml",rygOn);
    

}

void loop() {
    

}

int rygOn(String value){
    
    if (value == "Green"){
        digitalWrite(greenLed, HIGH);
        digitalWrite(yellowLed, LOW);
        digitalWrite(redLed, LOW);
        return 1;
        
    }
    else if (value == "Yellow"){
        digitalWrite(greenLed, LOW);
        digitalWrite(yellowLed, HIGH);
        digitalWrite(redLed, LOW);
        return 1;
        
    }
    else if (value == "Red"){
        digitalWrite(greenLed, LOW);
        digitalWrite(yellowLed, LOW);
        digitalWrite(redLed, HIGH);
        return 1;
        
    }
    else if (value == "OFF"){
        digitalWrite(greenLed, LOW);
        digitalWrite(yellowLed, LOW);
        digitalWrite(redLed, LOW);
        return 0;
    }
}
