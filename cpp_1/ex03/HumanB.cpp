#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name), _weapon(new Weapon("")) {}

HumanB::~HumanB(void) {}

void	HumanB::setWeapon(Weapon &w) {
	static int	i = 1;
	if (i++ == 1)
		delete _weapon;
	this->_weapon = &w;
	return;
}

void	HumanB::attack(void) const {
	std::cout << this->_name << " attacks with their " << this->_weapon->getType() << std::endl;
}
