#ifndef ROOF_H
#define ROOF_H

class Roof{
	private:
		double height;
	public:
		Roof(double _height):height(_height){};

		virtual void protectFromRain() = 0;	
};

#endif