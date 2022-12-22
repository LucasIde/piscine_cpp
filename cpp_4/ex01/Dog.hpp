/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lide <lide@student.s19.be>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 16:28:24 by lide              #+#    #+#             */
/*   Updated: 2022/12/22 18:20:10 by lide             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Dog_HPP
# define Dog_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal , public Brain{
	private:
		Brain *brain;

	public:
		Dog();
		Dog(Dog const &src);
		~Dog();

		Dog &operator=(Dog const &src);

		virtual void makeSound() const;

		std::string	&get_idea(int i) const;
		void		set_idea(std::string idea);
};

#endif
