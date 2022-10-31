#ifndef CHICKEN_H
#define CHICKEN_H

#include <string>

#include "meal.h"
#include "../enum/salad.h"
#include "../enum/dressing.h" 

class Chicken : public Meal{
	private:
		Salad salad;
		Dressing dressing;

	public:
		Chicken() = delete;
		Chicken(Salad _salad, Dressing dressing);

		void serve() const override;
};

#endif