#ifndef TokenConstraintEvent_h
#define TokenConstraintEvent_h

#include <Arduino.h>
#include "tcs34725.h"

class TokenConstraintEvent {
      public:
		TokenConstraintEvent();
		uint8_t locate(uint8_t current_sector_ID, float ct);
		void sensorConfig();
		
		tcs34725 rgb_sensor;
	  private:
	
};

#endif
