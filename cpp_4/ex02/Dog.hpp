/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lide <lide@student.s19.be>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 16:28:24 by lide              #+#    #+#             */
/*   Updated: 2022/12/26 14:17:32 by lide             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Dog_HPP
# define Dog_HPP

# include "A_Animal.hpp"

class Dog : public A_Animal {

	private:
		Brain *brain;

	public:
		Dog();
		Dog(Dog const &src);
		virtual ~Dog();

		Dog &operator=(Dog const &src);

		virtual void makeSound() const;
		std::string &getIdea(int i);
		void setIdea(const std::string &idea);
};

#endif
