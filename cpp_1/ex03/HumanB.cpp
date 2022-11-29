#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name), _weapon(NULL){}

HumanB::~HumanB(void) {}

void	HumanB::setWeapon(Weapon &w) {
	this->_weapon = &w;
	return;
}

void	HumanB::attack(void) const {
	if (!this->_weapon)
	{
		std::cout << this->_name << " attacks with their " << std::endl;
		return;
	}
	std::cout << this->_name << " attacks with their " << this->_weapon->getType() << std::endl;
}
