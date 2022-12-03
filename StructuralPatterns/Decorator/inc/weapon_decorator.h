#ifndef WEAPON_DECORATOR_H
#define WEAPON_DECORATOR_H

#include <memory>

#include "weapon.h"

class WeaponDecorator : public Weapon{
	protected:
		std::shared_ptr<Weapon> weapon;
	public:
		WeaponDecorator(std::shared_ptr<Weapon> _weapon):weapon(_weapon){}
		virtual ~WeaponDecorator(){}
};

#endif // WEAPON_DECORATOR_H
