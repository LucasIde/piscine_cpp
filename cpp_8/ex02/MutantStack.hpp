/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lide <lide@student.s19.be>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 19:08:28 by lide              #+#    #+#             */
/*   Updated: 2023/01/31 20:52:30 by lide             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

# include <stack>
# include <deque>
# include <iostream>

template< typename T, typename Container = std::deque<T> >
class MutantStack : public std::stack<T,Container> {
	public :
		typedef typename MutantStack::container_type::iterator	iterator;
		typedef typename MutantStack::container_type::const_iterator	const_iterator;
		typedef typename MutantStack::container_type::reverse_iterator	reverse_iterator;
		typedef typename MutantStack::container_type::const_reverse_iterator	const_reverse_iterator;

		MutantStack() : MutantStack<T, Container>::stack() {}
		MutantStack(const MutantStack &rhs) : MutantStack<T, Container>::stack(rhs) {}
		virtual ~MutantStack() {}

		MutantStack &operator=(MutantStack const &rhs) {
			this->c = rhs.c;
			return (*this);
		}

		iterator begin() {return (this->c.begin());}
		const_iterator begin() const {return (this->c.begin());}
		iterator end() {return (this->c.end());}
		const_iterator end() const {return (this->c.end());}
		reverse_iterator rbegin() {return (this->c.rbegin());}
		const_reverse_iterator rbegin() const {return (this->c.rbegin());}
		reverse_iterator rend() {return (this->c.rend());}
		const_reverse_iterator rend() const {return (this->c.rend());}
};


#endif
