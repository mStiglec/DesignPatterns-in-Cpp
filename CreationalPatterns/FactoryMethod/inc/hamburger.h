#ifndef HAMBURGER_H
#define HAMBURGER_H

#include "meal.h"
#include "../enum/size.h"

class Hamburger : public Meal{
	private:
		Size size;
	public:
		Hamburger() = delete;
		Hamburger(Size _size);

		void serve() const override;
};

#endif