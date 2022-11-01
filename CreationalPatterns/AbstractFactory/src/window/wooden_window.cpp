#include <iostream>

#include "../../inc/window/wooden_window.h"

WoodenWindow::WoodenWindow(double _height, double _width)
	:Window(_height, _width){

	std::cout << "Build wooden window" << std::endl;
}

void WoodenWindow::open() {
	std::cout << "Open wooden window" << std::endl;
}

void WoodenWindow::close() {
	std::cout << "Close wooden window" << std::endl;
}