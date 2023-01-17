
#include "Brain.hpp"

Brain::Brain() {
	std::cout << "Brain created" << std::endl;
}

Brain::Brain(Brain const &rhs) {
	std::cout << "Brain cloned" << std::endl;
	*this = rhs;
}

Brain::~Brain() {
	std::cout << "Brain destroyed" << std::endl;
}

Brain &Brain::operator=(Brain const &rhs) {
	for (int i = 0; i < 100; i++)
		this->ideas[i] = rhs.ideas[i];
	return (*this);
}

std::string &Brain::getIdea(int i) {
	if (i < 0 || i > 99)
	{
		std::cout << "range of ideas are not that big" << std::endl << "the last accecible idea is" <<std::endl;
		return (this->ideas[99]);
	}
	else
		return (this->ideas[i]);
}

void Brain::setIdea(const std::string &idea) {
	for (int i = 0; i < 100; i++)
	{
		if (this->ideas[i].empty())
		{
			this->ideas[i] = idea;
			return ;
		}
	}
	std::cout << "hundred ideas is my limit" << std::endl;
}
