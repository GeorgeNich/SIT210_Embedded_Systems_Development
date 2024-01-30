// ------------
// [G.E.O.R.G.E] - MORSE CODE 
// ------------




int led = D7; // D7 IS THE BUILT-IN LED

void setup() {

  pinMode(led, OUTPUT);

}


void loop() {

 // G
  digitalWrite(led, HIGH);
  delay(3000);
  digitalWrite(led, LOW);
  delay(1000);
  digitalWrite(led, HIGH);
  delay(3000);
  digitalWrite(led, LOW);
  delay(1000);
  digitalWrite(led, HIGH);
  delay(1000);
  digitalWrite(led, LOW);
  // 3 unit break before the next letter
  delay(3000);
  
  
  // E
  digitalWrite(led, HIGH);
  delay(1000);
  digitalWrite(led, LOW);
  // 3 unit break before the next letter
  delay(3000);
  
  
  // O
  digitalWrite(led, HIGH);
  delay(3000);
  digitalWrite(led, LOW);
  delay(1000);
  digitalWrite(led, HIGH);
  delay(3000);
  digitalWrite(led, LOW);
  delay(1000);
  digitalWrite(led, HIGH);
  delay(3000);
  digitalWrite(led, LOW);
  // 3 unit break before the next letter
  delay(3000);
  
  
  // R
  digitalWrite(led, HIGH);
  delay(1000);
  digitalWrite(led, LOW);
  delay(1000);
  digitalWrite(led, HIGH);
  delay(3000);
  digitalWrite(led, LOW);
  delay(1000);
  digitalWrite(led, HIGH);
  delay(1000);
  digitalWrite(led, LOW);
   // 3 unit break before the next letter
  delay(3000);
  
  // G
  digitalWrite(led, HIGH);
  delay(3000);
  digitalWrite(led, LOW);
  delay(1000);
  digitalWrite(led, HIGH);
  delay(3000);
  digitalWrite(led, LOW);
  delay(1000);
  digitalWrite(led, HIGH);
  delay(1000);
  digitalWrite(led, LOW);
  // 3 unit break before the next letter
  delay(3000);
  
  // E
  digitalWrite(led, HIGH);
  delay(1000);
  digitalWrite(led, LOW);
  // 3 unit break before the next letter
  delay(3000);

  // And repeat!
}

