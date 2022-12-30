
#include "Cure.hpp"

Cure::Cure() {
	this->_type = "cure";
}

Cure::Cure(Cure const &rhs) {
	this->_type = rhs._type;
}

Cure::~Cure() {}

Cure &Cure::operator=(Cure const &rhs) {
	this->_type = rhs._type;//check si utile
	return (*this);
}

void Cure::use(ICharacter &target) {
	std::cout << "Cure : \"* heals " << target.getName() << "\'s wound *\"" << std::endl;
}

Cure *Cure::clone() const {
return (new Cure(*this));
}
