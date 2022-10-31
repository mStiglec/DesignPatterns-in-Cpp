#ifndef RESTAURANT_H
#define RESTAURANT_H

#include <memory>
#include "meal.h"

class Restaurant{
	protected:
		int numOfReservations = 0;
		int numOfFreeTables = 0;
		int numOfServedProducts = 0;
	public:
		//Factory method
		virtual std::shared_ptr<Meal> makeMeal() const = 0;
		
		//Other class functionality
		virtual void serveMeal() const = 0;
		virtual void cleanTable() const = 0;
};

#endif