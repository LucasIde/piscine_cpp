/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lide <lide@student.s19.be>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 16:28:24 by lide              #+#    #+#             */
/*   Updated: 2022/12/21 18:07:12 by lide             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"

class Cat : public Animal {

	public:
		Cat();
		Cat(Cat const &src);
		~Cat();

		Cat &operator=(Cat const &src);

		virtual void makeSound() const;
};

#endif
