#ifndef WEAPON_H
#define WEAPON_H

class Weapon{
	protected:
		int damage;
		int armor;
		int magic;
		int speed;
	public:
		Weapon() = default;
		Weapon(int _damage, int _armor, int _magic, int _speed)
			:damage(_damage),armor(_armor),magic(_magic),speed(_speed){}
		virtual ~Weapon(){}
		
		virtual void attack() = 0;

		void upgradeDamage(int _damage){this->damage += _damage;}
		void upgradeArmor(int _armor){this-> armor += _armor;}
		void upgradeMagic(int _magic){this->magic += _magic;}
		void upgradeSpeed(int _speed){this->speed += _speed;}
};


#endif // WEAPON_H
