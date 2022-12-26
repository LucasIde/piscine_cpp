/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lide <lide@student.s19.be>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 16:28:24 by lide              #+#    #+#             */
/*   Updated: 2022/12/26 14:17:27 by lide             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "A_Animal.hpp"

class Cat : public A_Animal {

	private:
		Brain *brain;

	public:
		Cat();
		Cat(Cat const &src);
		virtual ~Cat();

		Cat &operator=(Cat const &src);

		virtual void makeSound() const;

		std::string &getIdea(int i);
		void setIdea(const std::string &idea);
};

#endif
