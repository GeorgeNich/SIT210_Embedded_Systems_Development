// This #include statement was automatically added by the Particle IDE.
#include "Adafruit_DHT_Particle.h"

#define DHTPIN D5     // what pin we're connected to


#define DHTTYPE DHT11		// DHT 11 
//#define DHTTYPE DHT22		// DHT 22 (AM2302)
//#define DHTTYPE DHT21		// DHT 21 (AM2301)


DHT dht(DHTPIN, DHTTYPE);


void setup() {
	Serial.begin(9600); 
	Serial.println("DHTxx test!");
	Particle.publish("state", "DHTxx test start");

	dht.begin();

	delay(2000);
}

void loop() {
// Wait a few seconds between measurements.
//	delay(2000);

// Read temperature as Celsius
	float temp = dht.getTempCelcius();



	Serial.print("Temp: "); 
	Serial.print(temp);
	Serial.print("*C ");
	Serial.println(Time.timeStr());
	//String timeStamp = Time.timeStr();
	Particle.publish("temp", String(temp), PRIVATE);
	delay(10000);

	
}

