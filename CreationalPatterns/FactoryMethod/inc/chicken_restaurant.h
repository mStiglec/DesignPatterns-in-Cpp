#include <memory>

#include "meal.h"
#include "restaurant.h"

class ChickenRestaurant : public Restaurant {
  public:
    ChickenRestaurant() = default;

    std::shared_ptr<Meal> makeMeal() const override;
    void serveMeal() const override;
    void cleanTable() const override;
};