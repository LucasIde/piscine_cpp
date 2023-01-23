/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lide <lide@student.s19.be>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 18:02:20 by lide              #+#    #+#             */
/*   Updated: 2023/01/23 18:44:04 by lide             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <exception>

template<typename T>
class Array {
	private:
		T *_array;
		unsigned int _len;

	public:
		Array() : _len(0) {
			this->_array = new void*();
		}

		Array<T>(unsigned int n) {
			this->_array = new T[n];
			this->_len = n;
			for (unsigned int i = 0; i < n; i++)
				this->_array[i] = 0;
		}

		Array<T>(Array const &rhs) {*this = rhs;}

		~Array<T>() {
			delete [] this->_array;
		}

		class InvalidIndex : public std::exception {
			const char *what() const throw() {
				return ("invalid index for this array");
			}
		};

		T &operator[](unsigned int len) {
			if (len > this->_len)
				throw (Array::InvalidIndex());
			return (this->_array[len]);
		}

		template <typename U>
		Array &operator=(Array<U> const &rhs) {
			this->_len = rhs._len;
			this->_array = new U[rhs._len];
			for (unsigned int i = 0; i < rhs._len; i++)
				this->_array[i] = rhs._array[i];
		}// checker si len est une deep copie

		size_t	size() {
			size_t nb = 0;

			for (size_t i = 0; i < this->_len; i++)
				if (this->_array[i] != 0)
					nb++;
			return (nb);
		}
};

#endif
