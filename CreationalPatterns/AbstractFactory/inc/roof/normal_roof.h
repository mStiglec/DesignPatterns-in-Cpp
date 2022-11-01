#ifndef NORMAL_ROOF_H
#define NORMAL_DOOR_H

#include "roof.h"

class NormalRoof: public Roof{
	public:
		NormalRoof(double height);
		
		void protectFromRain() override;
};

#endif