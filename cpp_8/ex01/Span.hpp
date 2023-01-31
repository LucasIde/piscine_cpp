/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lide <lide@student.s19.be>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 14:47:05 by lide              #+#    #+#             */
/*   Updated: 2023/01/31 21:27:49 by lide             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
 #define SPAN_HPP

# include <iostream>
# include <list>
# include <algorithm>
# include <exception>
# include <cmath>

class Span
{
	private:
		std::list<int> _span;
		unsigned int _max;

	public:
		Span();
		Span(unsigned int N);
		Span(Span const &src);
		~Span();

		Span &operator=(Span const &rhs);

		void addNumber(int i);
		void addmultipleNumbers(std::list<int>::iterator &begin, std::list<int>::iterator &end);
		unsigned int shortestSpan();
		unsigned int longestSpan();

		std::list<int> getspan() const;

		class NoSpan : public std::exception {
			virtual const char *what() const throw();
		};

		class Outofspace : public std::exception {
			virtual const char *what() const throw();
		};
};

#endif
