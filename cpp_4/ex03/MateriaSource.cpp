/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lide <lide@student.s19.be>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 17:38:49 by lide              #+#    #+#             */
/*   Updated: 2022/12/30 18:07:06 by lide             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource() {
	for (int i = 0; i < 4; i++)
		this->incantation[i] = NULL;
}

MateriaSource::MateriaSource(MateriaSource const &rhs) {
	*this = rhs;
}

MateriaSource::~MateriaSource() {
	for (int i = 0; i < 4; i++)
		delete this->incantation[i];
}

MateriaSource &MateriaSource::operator=(MateriaSource const &rhs) {
	for (int i = 0; i < 4; i++)
		if (this->incantation[i])
			delete this->incantation[i];
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
	{
		if (this->incantation[i] == NULL)
		{
			this->incantation[i] = src;//doit peut etre delete le materia si pas de place
			return ;
		}
	}
}

AMateria* MateriaSource::createMateria(std::string const & type) {
	for (int i = 0; i < 4; i++)
		if (this->incantation[i] != NULL && !this->incantation[i]->getType().compare(type))
			return (this->incantation[i]->clone());
	return (0);
}
