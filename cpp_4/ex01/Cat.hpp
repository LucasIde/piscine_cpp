/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lide <lide@student.s19.be>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 16:28:24 by lide              #+#    #+#             */
/*   Updated: 2022/12/22 18:20:29 by lide             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal , public Brain {
	private:
		Brain *brain;

	public:
		Cat();
		Cat(Cat const &src);
		~Cat();

		Cat &operator=(Cat const &src);

		virtual void makeSound() const;

		std::string	&get_idea(int i) const;
		void		set_idea(std::string idea);
};

#endif
