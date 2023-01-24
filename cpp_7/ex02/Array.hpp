/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lide <lide@student.s19.be>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 18:02:20 by lide              #+#    #+#             */
/*   Updated: 2023/01/24 18:12:20 by lide             ###   ########.fr       */
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
		Array<T>() : _len(0) {
			this->_array = new T[0];
		}

		Array<T>(unsigned int n) {
			this->_array = new T[n];
			this->_len = n - 1;
			for (unsigned int i = 0; i < n; i++)
				this->_array[i] = 0;
		}

		Array<T>(Array const &rhs) {
			this->_len = rhs._len;
			this->_array = new T[rhs._len];
			for (unsigned int i = 0; i < rhs._len; i++)
				this->_array[i] = rhs._array[i];
		}

		~Array<T>() {delete [] this->_array;}

		class InvalidIndex : public std::exception {
			const char *what() const throw() {
				return ("invalid index for this array");
			}
		};

		T &operator[](size_t len) {
			if (len > this->_len)
				throw (Array::InvalidIndex());
			return (this->_array[len]);
		}

		Array &operator=(Array<T> const &rhs) {
			delete [] this->_array;
			this->_len = rhs._len;
			this->_array = new T[rhs._len];
			for (unsigned int i = 0; i < rhs._len; i++)
				this->_array[i] = rhs._array[i];
			return (*this);
		}

		size_t	size() {
			size_t nb = 0;

			for (size_t i = 0; i < this->_len; i++)
				if (this->_array[i] != 0)
					nb++;
			return (nb);
		}
};

#endif
