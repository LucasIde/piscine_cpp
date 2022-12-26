
#ifndef BRAIN_HPP
#define BRAIN_HPP

# include <iostream>
#include <string>

class Brain
{
	protected:
		std::string ideas[100];

	public:
		Brain();
		~Brain();
		Brain(Brain const &src);

		Brain &operator=(Brain const &rhs);

		std::string &getIdea(int i);
		void setIdea(const std::string &idea);
};

#endif
