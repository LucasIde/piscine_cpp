/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convertor.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lide <lide@student.s19.be>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 13:02:05 by lide              #+#    #+#             */
/*   Updated: 2023/01/12 15:57:14 by lide             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERTOR_HPP
 #define CONVERTOR_HPP

# include <iostream>
# include <cstdlib>

class Convertor
{
	private:
		const std::string	&_toconvert;
		char				_char;
		int					_int;
		float				_float;
		double				_double;
		double				_cast;

	public:
		Convertor();
		Convertor(const std::string &toconvert);
		Convertor(Convertor const &src);
		virtual ~Convertor();

		Convertor &operator=(Convertor const &rhs);

		bool	to_char();
		bool	to_int();
		bool	to_float();
		bool	to_double();

		class EmptyString : std::exception {
			public:
				virtual const char *what() const throw();
		};
};

#endif
