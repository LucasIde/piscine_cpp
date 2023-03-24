
#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange() : _file_name("") {}

BitcoinExchange::BitcoinExchange(const std::string file) : _file_name(file) {
	create_database();
	create_file_value();
}

BitcoinExchange::BitcoinExchange(BitcoinExchange const &rhs) {
	*this = rhs;
}

BitcoinExchange::~BitcoinExchange() {}

BitcoinExchange &BitcoinExchange::operator=(BitcoinExchange const &rhs) {
	this->_file_value = rhs._file_value;
	this->_database = rhs._database;
	return (*this);
}

int check_date(std::string date) {
	std::string
}

int check_line(std::string str) {
	size_t pos = str.find('|');
	size_t len = str.length();
	std::string date;
	std::string num;
	if (pos == -1)
	{
		std::cout << "Error: bad input => " << str << std::endl;
		return (1);
	}
	date = str.substr(0 , pos);
	num = str.substr(pos + 1, len - (pos + 1));
	if (check_date(date)); {
		std::cout << "Error: bad input => " << str << std::endl;
		return (1);
	}
}

//do the convertion
void BitcoinExchange::create_file_value() {
	std::ifstream	infile(this->_file_name);
	std::string		save;
	char			file[2];
	size_t			max = 0;
	size_t			pos;
	size_t			len;
	std::string		str;
	std::string		convert;

	while (infile.read(file, 1))
		save += file;
	infile.close();

	len = save.length();
	max = save.rfind('\n');
	pos = save.find('\n');
	for (int i = 0; pos < len && pos < max; i++)
	{
		i = pos + 1;
		pos = save.find('\n', i);
		str = save.substr(i, pos - i);
		if (!check_line(str))
		{

		}
	}
}

void BitcoinExchange::create_database() {
	std::string		database = "data.csv";
	std::ifstream	infile(database);
	std::string		save;
	char			file[2];
	size_t			max = 0;
	size_t			pos = 18;
	size_t			len;
	std::string		day;
	std::string		convert;

	while (infile.read(file, 1))
		save += file;
	infile.close();
	len = save.length();
	max = save.rfind('\n');
	for (int i = 0; pos < len && pos < max; i++)
	{
		i = pos + 1;
		pos = save.find('\n', i);
		day = save.substr(i, 10);
		convert = save.substr(i + 11, pos - (i + 11));
		double num = strtod(convert.c_str() , NULL);
		this->_database[day] = num;
	}

	// std::map<std::string, double>::iterator it;
	// it = this->_database.find("2009-01-02");
	// std::cout << it->first << " | " << it->second << std::endl;
}

std::string change_number(std::string n) {
	std::string number;
	std::stringstream s;
	int i = atoi(n.c_str());
	i--;
	if (i < 10)
		s << 0;
	s << i;
	number = s.str();
	return (number);
}

std::string	change_day(std::string date) {
	std::string d;
	std::string year;
	std::string month;
	std::string day;

	year.assign(date,0,4);
	month.assign(date,5,2);
	day.assign(date,8,2);
	if (day == "01")
	{
		day = "31";
		if (month == "01")
		{
			month = "12";
			year = change_number(year);
		}
		else
			month = change_number(month);
	}
	else
		day = change_number(day);
	d = year + '-' + month + '-' + day;
	std::cout << d << std::endl;
	return (d);
}

int BitcoinExchange::find_value(void) {
	std::map<std::string , double> data;

	data["2011-01-03"]=1.2;
	data["2011-01-04"]=1.0;

	for (std::map<std::string,double>::iterator it=data.begin(); it!=data.end(); ++it)
		std::cout << it->first << " => " << it->second << '\n';

	std::cout << std::endl;

	std::map<std::string, double>::iterator it;
	std::string date = "2011-02-05";

	it = data.find(date);
	while (it == data.end() && date != "2011-01-06") {
		date = change_day(date);
		it = data.find(date);
	}
	if (it != data.end())
		std::cout << it->first << " | " << it->second << std::endl;
	else
		std::cout << "not found" << std::endl;
	return (0);
}
