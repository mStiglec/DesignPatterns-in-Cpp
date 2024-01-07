#include <memory>

#include "meal.h"
#include "restaurant.h"

class PizzaRestaurant : public Restaurant {
  public:
    PizzaRestaurant() = default;

    std::shared_ptr<Meal> makeMeal() const override;
    void serveMeal() const override;
    void cleanTable() const override;
};