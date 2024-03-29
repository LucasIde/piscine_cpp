
#ifndef BITCOINEXCHANGE_HPP
 #define BITCOINEXCHANGE_HPP

# include <iostream>
# include <map>
# include <fstream>
# include <string>
# include <sstream>
# include <cstdlib>

class BitcoinExchange
{
	private:
	std::map<std::string , double>	_database;
	const std::string				_file_name;
	int check_line(std::string str);
	double find_value(std::string date);

	public:
		BitcoinExchange();
		BitcoinExchange(const std::string file);
		BitcoinExchange(BitcoinExchange const &src);
		~BitcoinExchange();

		BitcoinExchange &operator=(BitcoinExchange const &rhs);

		void create_database(void);
		void create_file_value(void);
};

#endif
