
#include "Cure.hpp"

Cure::Cure() : _type("cure") {}

Cure::Cure(Cure const &rhs) : _type("cure") {}

Cure::~Cure() {}

Cure &Cure::operator=(Cure const &rhs) {
	this->_type = rhs._type;//check si utile
	return (*this);
}

Cure *Cure::clone() const {
	new Cure *materia;
	Materia = this;
	return (this);
}

void use(ICharacter &target) {
	std::cout << "Cure : \"* heals " << target.getName << "\'s wound *\"" << std::endl;
}