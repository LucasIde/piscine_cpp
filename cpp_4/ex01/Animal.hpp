/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lide <lide@student.s19.be>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 16:09:08 by lide              #+#    #+#             */
/*   Updated: 2022/12/23 15:02:31 by lide             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include "Brain.hpp"

class Animal {

	protected:
		std::string type;

	public:
		Animal();
		Animal(Animal const &src);
		virtual ~Animal();

		Animal &operator=(Animal const &rhs);

		virtual void makeSound() const;
		const std::string &getType() const;
};

#endif
