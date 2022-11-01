#ifndef DOOR_H
#define DOOR_H

class Door{
	private:
		double height;
		double width;
	public:
		Door(double _height, double _width)
			:height(_height), width(_width){};
		virtual void open() = 0;
		virtual void close() = 0;
};

#endif