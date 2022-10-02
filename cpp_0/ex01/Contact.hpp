/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lide <lide@student.s19.be>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 15:56:54 by lide              #+#    #+#             */
/*   Updated: 2022/10/02 23:00:54 by lide             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <iomanip>
# include <string>


class Contact {

	public:

		Contact();
		~Contact();

		void setFirstName(std::string str);
		void setLastName(std::string str);
		void setNickname(std::string str);
		void setNumber(std::string str);
		void setSecret(std::string str);

		std::string getFirstName(void) const;
		std::string getLastName(void) const;
		std::string getNickname(void) const;
		std::string getNumber(void) const;
		std::string getSecret(void) const;

	private:

		std::string	first_name;
		std::string	last_name;
		std::string	nickname;
		std::string	number;
		std::string	secret;

};

#endif
