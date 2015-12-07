#ifndef TokenTokenEvent_h
#define TokenTokenEvent_h

#include <Arduino.h>
#include "Adafruit_MPR121.h"

#ifndef _BV
    #define _BV(bit) (1<<(bit))
#endif

class TokenTokenEvent {
      public:
		TokenTokenEvent();
		void capConfig();
		bool capTestProximity();
		Adafruit_MPR121 cap;
		
		int ref1;
		int ref2;
		int ref3;
		int ref4;
	  private:
	
};

#endif
