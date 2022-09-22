/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lide <lide@student.s19.be>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 15:39:27 by lide              #+#    #+#             */
/*   Updated: 2022/09/22 02:01:14 by lide             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"
# include <stdlib.h>
class PhoneBook {

	public:
		PhoneBook();
		~PhoneBook();

		void	add(void);
		void	search(void) const;

	private:
		Contact	contact[8];
		int		index;
};

#endif
