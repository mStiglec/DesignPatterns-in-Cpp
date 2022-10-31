#include <memory>

#include "restaurant.h"
#include "meal.h"

class HamburgerRestaurant : public Restaurant{
	public:
		HamburgerRestaurant() = default;

		std::shared_ptr<Meal> makeMeal() const override;
		void serveMeal() const override;
		void cleanTable() const override;
};