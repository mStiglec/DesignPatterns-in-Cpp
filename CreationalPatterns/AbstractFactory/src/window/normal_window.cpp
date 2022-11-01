#include <iostream>

#include "../../inc/window/normal_window.h"

NormalWindow::NormalWindow(double _height, double _width)
	: Window(_height, _width){

	std::cout << "Build normal window" << std::endl;
}

void NormalWindow::open() {
	std::cout << "Open normal window" << std::endl;
}

void NormalWindow::close() {
	std::cout << "Close normal window" << std::endl;
}