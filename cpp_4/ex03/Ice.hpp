/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lide <lide@student.s19.be>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 16:26:46 by lide              #+#    #+#             */
/*   Updated: 2022/12/26 16:26:47 by lide             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP

# include <iostream>

class Ice
{
	private:

	public:
		Ice();
		Ice(Ice const &src);
		~Ice();

		Ice &operator=(Ice const &rhs);
};

#endif
