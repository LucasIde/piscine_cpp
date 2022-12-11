#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name), type(NULL){}

HumanB::~HumanB(void) {}

void	HumanB::setWeapon(Weapon &w) {
	this->type = &w;
	return;
}

void	HumanB::attack(void) const {
	if (!this->type)
	{
		std::cout << this->_name << " attacks with their " << std::endl;
		return;
	}
	std::cout << this->_name << " attacks with their " << this->type->getType() << std::endl;
}
