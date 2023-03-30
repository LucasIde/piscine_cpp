
#ifndef BITCOINEXCHANGE_HPP
 #define BITCOINEXCHANGE_HPP

# include <iostream>
# include <map>
# include <fstream>
# include <string>
# include <sstream>

class BitcoinExchange
{
	private:
	std::map<std::string , double>	_database;
	std::map<std::string , double>	_file_value;
	const std::string				_file_name;
	void create_database(void);
	void create_file_value(void);
	int check_line(std::string str);
	double find_value(std::string date);

	public:
		BitcoinExchange();
		BitcoinExchange(const std::string file);
		BitcoinExchange(BitcoinExchange const &src);
		~BitcoinExchange();

		BitcoinExchange &operator=(BitcoinExchange const &rhs);
};

#endif
