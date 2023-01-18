/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lide <lide@student.s19.be>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 16:26:26 by lide              #+#    #+#             */
/*   Updated: 2023/01/18 15:41:11 by lide             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>
# include <string>
# include "Character.hpp"

class ICharacter;

class AMateria
{
	protected:
		std::string _type;

	public:
		AMateria();
		AMateria(AMateria const &src);
		AMateria(std::string const &type);
		virtual ~AMateria();

		AMateria &operator=(AMateria const &rhs);
		std::string const & getType() const;
		virtual void use(ICharacter &target);
		virtual AMateria* clone() const = 0;
};

#endif
