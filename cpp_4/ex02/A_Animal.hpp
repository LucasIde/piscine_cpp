/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A_Animal.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lide <lide@student.s19.be>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 16:09:08 by lide              #+#    #+#             */
/*   Updated: 2022/12/26 14:16:03 by lide             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include "Brain.hpp"

class A_Animal {

	protected:
		std::string type;

	public:
		A_Animal();
		A_Animal(A_Animal const &src);
		virtual ~A_Animal();

		A_Animal &operator=(A_Animal const &rhs);

		const std::string &getType() const;
		virtual void makeSound() const = 0;
};

#endif
