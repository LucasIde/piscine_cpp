/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lide <lide@student.s19.be>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 13:59:43 by lide              #+#    #+#             */
/*   Updated: 2023/01/30 17:22:45 by lide             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <exception>
# include <algorithm>
# include <array>
# include <vector>
# include <deque>
# include <list>

class No_Occurence : public std::exception {
	const char *what() const throw() {
		return ("no occurence has been found");
	}
};

template<typename T>
typename T::const_iterator easyfind(T const &container, int to_find) {
	if (container.begin() == container.end())
		throw(No_Occurence());
	typename T::const_iterator it = std::find(container.begin(), container.end(), to_find);
	if (*it == to_find)
		return (it);
	else
		throw(No_Occurence());
}

#endif
