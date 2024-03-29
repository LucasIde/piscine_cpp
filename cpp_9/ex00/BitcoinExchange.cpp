
#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange() : _file_name("") {}

BitcoinExchange::BitcoinExchange(const std::string file) : _file_name(file) {}

BitcoinExchange::BitcoinExchange(BitcoinExchange const &rhs) {
	*this = rhs;
}

BitcoinExchange::~BitcoinExchange() {}

BitcoinExchange &BitcoinExchange::operator=(BitcoinExchange const &rhs) {
	this->_database = rhs._database;
	return (*this);
}

void BitcoinExchange::create_database() {
	std::string		database = "data.csv";
	std::ifstream	infile(database);
	std::string		save;
	char			file[2];
	size_t			max = 0;
	size_t			pos;
	size_t			len;
	std::string		day;
	std::string		convert;

	while (infile.read(file, 1))
		save += file;
	infile.close();
	len = save.length();
	pos = save.find("\n") + 1;
	max = save.rfind('\n');
	for (int i = 0; pos < len && pos < max; i++)
	{
		i = pos + 1;
		pos = save.find('\n', i);
		day = save.substr(i, 10);
		convert = save.substr(i + 11, pos - (i + 11));
		if (!convert.compare("-0"))
			convert = "0";
		double num = strtod(convert.c_str() , NULL);
		this->_database[day] = num;
	}
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
	return (d);
}

double BitcoinExchange::find_value(std::string date) {
	std::map<std::string, double>::iterator it;

	it = this->_database.find(date);
	while (it == this->_database.end() && date != "2009-01-02") {
		date = change_day(date);
		it = this->_database.find(date);
	}
	if (it != this->_database.end())
		return (it->second);
	return (0);
}

int check_num(std::string num) {
	double n;

	if (num.find_first_not_of("-0123456789.") != std::string::npos) {
		std::cout << "Error: only numbers are accepted for convertion." << std::endl;
		return (1);
	}
	if (num.find("-") != std::string::npos) {
		std::cout << "Error: only numbers are accepted for convertion." << std::endl;
		return (1);
	}
	n = strtod(num.c_str(), NULL);
	if (n > 1000){
		std::cout << "Error: number is too large." << std::endl;
		return (1);
	}
	if (n < 0){
		std::cout << "Error: not a positive number." << std::endl;
		return (1);
	}
	return (0);
}

int check_date(std::string date) {
	std::string n;
	size_t year;
	size_t month;
	size_t day;
	int pos = 0;
	size_t len = 0;

	len = date.length();
	if (len != 10)
		return (1);
	pos = date.find("-");
	if (pos != 4)
		return (1);
	pos = date.find("-", pos + 1);
	if (pos != 7)
		return (1);
	n.assign(date,0,4);
	year = atoi(n.c_str());
	if (year < 2009 || year > 2100)
		return (1);
	n.assign(date,5,2);
	month = atoi(n.c_str());
	if (month < 1 || month > 12)
		return (1);
	n.assign(date,8,2);
	day = atoi(n.c_str());
	if (day < 1 || day > 31)
		return (1);
	if (year == 2009 && month == 1 && day < 2)
		return (1);
	return (0);
}

int BitcoinExchange::check_line(std::string str) {
	int pos = str.find('|');
	int sp;
	double n = 0;
	double d = 0;
	size_t len = str.length();
	std::string date;
	std::string num;

	if (pos == -1)
	{
		std::cout << "Error: bad input => " << str << std::endl;
		return (1);
	}

	date = str.substr(0 , pos);
	sp = date.find(" ");
	if (sp != -1)
		date.erase(sp, 1);
	num = str.substr(pos + 1, len - (pos + 1));
	sp = 0;
	sp = num.find(' ');
	if (sp != -1)
		num.erase(sp, 1);
	if (!num.compare("-0"))
		num = "0";
	if (check_date(date)) {
		std::cout << "Error: bad input => " << str << "." << std::endl;
		return (1);
	}
	if (check_num(num))
		return (1);
	n = strtod(num.c_str(), NULL);
	d = find_value(date);
	std::cout << date << " => " << num << " = " << n * d << std::endl;
	return(0);
}

void BitcoinExchange::create_file_value() {
	std::ifstream	infile(this->_file_name);
	std::string		save;
	char			file[2];
	size_t			max = 0;
	size_t			pos;
	size_t			len;
	std::string		str;
	std::string		convert;

	if (!infile.good())
	{
		std::cout << "Error: could not open the file" << std::endl;
		return;
	}
	while (infile.read(file, 1))
		save += file;
	infile.close();

	len = save.length();
	max = save.rfind('\n');
	pos = save.find('\n');
	for (int i = 0; pos < len && pos <= max; i++)
	{
		i = pos + 1;
		pos = save.find('\n', i);
		str = save.substr(i, pos - i);
		check_line(str);
	}
}
