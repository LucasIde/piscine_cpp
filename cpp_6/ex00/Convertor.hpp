
#ifndef CONVERTOR_HPP
 #define CONVERTOR_HPP

# include <iostream>

class Convertor
{
	private:
		const std::string	&_toconvert;
		char				_char;
		int					_int;
		float				_float;
		double				_double;

	public:
		Convertor();
		Convertor(const std::string &toconvert);
		Convertor(Convertor const &src);
		virtual ~Convertor();

		Convertor &operator=(Convertor const &rhs);

		char		to_char();
		int			to_int();
		float		to_float();
		double		to_double();
};

#endif
