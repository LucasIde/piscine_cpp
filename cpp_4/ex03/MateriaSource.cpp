
#include "MateriaSource.hpp"

MateriaSource::MateriaSource() {
	for (int i = 0; i < 4; i++)
		incantation[i] = NULL;
}

MateriaSource::MateriaSource(MateriaSource const &rhs) {
	*this = rhs;
}

MateriaSource::~MateriaSource() {
	for (int i = 0; i < 4; i++)
		delete incantation[i];
}

MateriaSource &MateriaSource::operator=(MateriaSource const &rhs) {
	for (int i = 0; i < 4; i++)
		delete incantation[i];
	for (int i = 0; i < 4; i++)
	{
		if (rhs.incantation[i] != NULL)
			this->incantation[i] = rhs.incantation[i]->clone();
		else
			this->incantation[i] = NULL;
	}
	return (*this);
}

void MateriaSource::learnMateria(AMateria *src) {
	for (int i = 0; i < 4; i++)
		if (incantation[i] == NULL)
			incantation[i] = src;//doit peut etre delete le materia si pas de place
}

AMateria* MateriaSource::createMateria(std::string const & type) {
	for (int i = 0; i < 4; i++)
	{
		if (this->incantation[i]->getType().compare(type))
			return (this->incantation[i]->clone());
	}
	return (0);
}
