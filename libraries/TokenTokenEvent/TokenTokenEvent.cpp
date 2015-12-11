#include <TokenTokenEvent.h>
   
TokenTokenEvent::TokenTokenEvent()
{
	Adafruit_MPR121 cap = Adafruit_MPR121();
}

void TokenTokenEvent::capConfig()
{
	if (!cap.begin(0x5A)) 
	{
		Serial.println("MPR121 not found, check wiring?");
		while (1);
	}
	
	delay(500);
	ref1 = cap.filteredData(6);
}

void TokenTokenEvent::capTestProximity(int* face1)
{
	if(cap.filteredData(6) < ref1 - 12)
	{
		Serial.println("Token-Token on face 1");
		*face1 = 1;
	}
}



