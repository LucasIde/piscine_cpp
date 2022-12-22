/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lide <lide@student.s19.be>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 18:31:50 by lide              #+#    #+#             */
/*   Updated: 2022/12/22 18:11:08 by lide             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

# include <iostream>

class Brain
{
	protected:

	public:
		std::string ideas[100];

		Brain();
		~Brain();
		Brain(Brain const &src);

		Brain &operator=(Brain const &rhs);
};

#endif
