/*
	Read Analogue pin 0 and send it over serial at timmed interval without delay
*/

include
// =VARIABLE DECLARATION=

	// Time variable
	// Generally, you should use "unsigned long" for variables that hold time
	// The value will quickly become too large for an int to store
unsigned long previousMillis = 0;        // will store last time LED was updated
unsigned long currentMillis = 0 ;


// Normal Variable
double value = 0;   				// test value
int sensorValue = 0;			// Value to play on serial


// Constants won't change:
const long interval = 250;           // interval at which to send over serial data
int pot1 = A0;						// Analog in from pot on pin 0




// =END VARIABLE DECLARATION=




// the setup routine runs once when you press reset:
void setup() {


	pinMode(13, OUTPUT);


	// initialize serial communication at 9600 bits per second:
	Serial.begin(9600);


}// End Setup




// the loop routine runs over and over again forever:
void loop() {


	// Read the input on analog pin 0 and do the following y=x^0.33333*8932/500

		sensorValue = analogRead(pot1);
		value = pow(sensorValue, 0.333333);
		value = value * 17.864;


	// SERIAL OUT START
		// Serial output with timming

		currentMillis = millis();

		if (currentMillis - previousMillis >= interval) {

		digitalWrite(13, LOW);
		previousMillis = currentMillis;
		// print out the value you read:
		Serial.print("Analog 0 IN: ");
		Serial.print(sensorValue);
		Serial.print(" Channel 0 : ");
		Serial.println(value);
		digitalWrite(13, HIGH);

		}


}// End



