#ifndef POISON_DECORATOR_H
#define POISON_DECORATOR_H

#include "weapon_decorator.h"

class PoisonDecorator : public WeaponDecorator{
	public:
		PoisonDecorator(std::shared_ptr<Weapon> weapon);
		void attack() override;
};


#endif // POISON_DECORATOR_H
