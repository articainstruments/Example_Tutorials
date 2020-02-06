/**
 * This example demonstrates how to read analog signals
 * It assumes there are potentiometers connected
 * to the 16 channels of the 74HC4067 mux/demux
 * 
 * For more about the interface of the library go to
 * https://github.com/pAIgn10/MUX74HC4067
 */

#include "MUX74HC4067.h"

// Creates a MUX74HC4067 instance
// 1st argument is the Arduino PIN to which the EN pin connects
// 2nd-5th arguments are the Arduino PINs to which the S0-S3 pins connect

MUX74HC4067 mux(17, 9, 10, 11, 12);

void setup()
{
	Serial.begin(9600);  // Initializes serial port
    // Waits for serial port to connect. Needed for Leonardo only
    while ( !Serial ) ;

}

// Reads the 16 channels and reports on the serial monitor
// the corresponding value read by the A/D converter
void loop()
{
	int data;

  mux.signalPin(A2, INPUT, ANALOG);

	for (byte i = 0; i < 4; ++i)
	{
		// Reads from channel i. Returns a value from 0 to 1023
		data = mux.read(i);

		Serial.print(data);
		Serial.print("  ");
	}

   mux.signalPin(16, INPUT);

 for (byte i = 4; i < 8; ++i)
  {
    // Reads from channel i. Returns a value from 0 to 1023
    data = mux.read(i);

    Serial.print(data);
    Serial.print("  ");
  }

  mux.signalPin(A2, INPUT, ANALOG);

 for (byte i = 8; i < 16; ++i)
  {
    // Reads from channel i. Returns a value from 0 to 1023
    data = mux.read(i);

    Serial.print(data);
    Serial.print("  ");
  }
 
	Serial.println();
	
	delay(50);
}
