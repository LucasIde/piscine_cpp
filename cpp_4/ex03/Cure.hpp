
#ifndef CURE_HPP
# define CURE_HPP

# include <iostream>
# include "AMateria.hpp"

class Cure : public AMateria
{
	public:
		Cure();
		Cure(Cure const &src);
		~Cure();

		Cure &operator=(Cure const &rhs);
		virtual Cure *clone() const;
		virtual void use(ICharacter &target);
};

#endif
