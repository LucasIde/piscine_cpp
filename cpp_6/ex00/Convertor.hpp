
#ifndef CONVERTOR_HPP
 #define CONVERTOR_HPP

# include <iostream>
# include <iomanip>
# include <string>
# include <cctype>
# include <cstdlib>
# include <climits>
# include <cfloat>

class Convertor
{
	private:
		double	_cast;
		bool	_nan;

	public:
		Convertor();
		Convertor(const std::string &str);
		Convertor(Convertor const &src);
		~Convertor();

		Convertor &operator=(Convertor const &rhs);

		char	to_char() const;
		int		to_int() const;
		float	to_float() const;
		double	get_cast() const;

		class NonDisplay : public std::exception {
				virtual const char *what() const throw();
		};

		class Impossible : public std::exception {
				virtual const char *what() const throw();
		};

		class BadInput : public std::exception {
				virtual const char *what() const throw();
		};

		class EmptyString : public std::exception {
				virtual const char *what() const throw();
		};
};

std::ostream &operator<<(std::ostream &o, Convertor const &rhs);

#endif
