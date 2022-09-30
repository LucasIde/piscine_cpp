/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lide <lide@student.s19.be>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 15:44:42 by lide              #+#    #+#             */
/*   Updated: 2022/09/30 17:19:30 by lide             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>
#include <string>

int main (int argc , char **argv) {
	if (argc != 4)
	{
		std::cout << "wrong arguments" << std::endl;
		return (1);
	}

	std::string		name = argv[1];
	std::string		s1 = argv[2];
	std::ofstream	outfile(name.append(".replace"), std::ofstream::out | std::ofstream::trunc);
	std::ifstream	infile(name);
	std::string		save;
	std::string		new_save;
	char			file[1];
	size_t			max = 0;
	size_t			pos = 0;
	size_t			len;
	size_t			len_s1 = s1.length();

	while (infile.read(file, 1))
		save += file;
	infile.close();
	len = save.length();
	max = save.rfind(s1);
	if (max > len)
	{
		outfile << save;
		outfile.close();
		return (0);
	}
	for (int i = 0; pos < len && pos < max; i++)
	{
		pos = save.find(s1, i);
		new_save += save.substr(i, pos - i);
		new_save += argv[3];
		i = pos + (len_s1 - 1);
	}
	if (max + len_s1 < len)
		new_save += save.substr(max + len_s1, len - max);
	outfile << new_save;
	outfile.close();

	return (0);
}
