#include <TokenConstraintEvent.h>
   
TokenConstraintEvent::TokenConstraintEvent()
{
	tcs34725 rgb_sensor = tcs34725();
}

void TokenConstraintEvent::sensorConfig()
{
	if(!rgb_sensor.begin())
	{
		Serial.println("Problem color sensor");
	}
}

uint8_t TokenConstraintEvent::locate(uint8_t current_sector_ID, float ct)
{
	if (ct > 2500 && ct < 2900)
    {
		Serial.print("Yellow");
        return 3;
    }
    else if (ct > 4320 && ct < 4340)
    {
        Serial.print("Green");
        return 4;
    }
    else if (ct > 4340 && ct < 4500)
    {
        Serial.print("Purple");
        return 5;
    }
    else if (ct > 5500 && ct < 6200)
    {
		Serial.print("Dark blue");
        return 6;
    }
    else if (ct > 4000 && ct < 4100)
    {
        Serial.print("Black");
        return 2;
    }
    else
    {
		return current_sector_ID;
        //Serial.print("Non trouve");
    }
}




