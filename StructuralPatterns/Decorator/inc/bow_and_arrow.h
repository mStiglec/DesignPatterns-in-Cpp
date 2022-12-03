#ifndef BOW_AND_ARROW_H
#define BOW_AND_ARROW_H

#include "weapon.h"

class BowAndArrow : public Weapon{
	public:
		BowAndArrow();
		void attack() override;
};

#endif // BOW_AND_ARROW_H
