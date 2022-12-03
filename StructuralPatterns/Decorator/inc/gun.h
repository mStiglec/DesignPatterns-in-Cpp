#ifndef GUN_H
#define GUN_H

#include "weapon.h"

class Gun : public Weapon{
	public:
		Gun();
		void attack() override;
};

#endif // GUN_H
