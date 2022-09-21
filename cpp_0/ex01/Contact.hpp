/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lide <lide@student.s19.be>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 15:56:54 by lide              #+#    #+#             */
/*   Updated: 2022/09/21 17:17:18 by lide             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <string>


class Contact {

	public:
		Contact();
		~Contact();

		std::string	first_name;
		std::string	last_name;
		std::string	nickname;
		std::string	number;
		std::string	secret;
};

#endif
