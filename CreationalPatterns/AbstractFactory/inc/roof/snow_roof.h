#ifndef SNOW_ROOF_H
#define SNOW_ROOF_H

#include "roof.h"

class SnowRoof: public Roof{
	public:
		SnowRoof(double height);
		
		void protectFromRain() override;
};

#endif