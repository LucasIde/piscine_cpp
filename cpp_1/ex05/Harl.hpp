/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lide <lide@student.s19.be>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 17:57:02 by lide              #+#    #+#             */
/*   Updated: 2022/09/30 18:03:57 by lide             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

# include <iostream>
# include <string>

class Harl {

	public:

		Harl::Harl(void);
		Harl::~Harl(void);

		void complain(std::string level);

	private:

		void debug(void);
		void info(void);
		void warning(void);
		void error(void);
};

#endif
