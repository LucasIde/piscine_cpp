
#ifndef CURE_HPP
#define CURE_HPP

# include <iostream>

class Cure
{
	private:

	public:
		Cure();
		Cure(Cure const &src);
		~Cure();

		Cure &operator=(Cure const &rhs);
};

#endif
