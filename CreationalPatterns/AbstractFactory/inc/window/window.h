#ifndef WINDOW_H
#define WINDOW_H

class Window{
	private:
		double height;
		double width;
	public:
		Window(double _height, double _width)
			:height(_height), width(_width){};
		
		virtual void open() = 0;
		virtual void close() = 0;
};

#endif