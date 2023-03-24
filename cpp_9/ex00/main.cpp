
#include "BitcoinExchange.hpp"

int main() {
	std::string f = "file";
	BitcoinExchange test(f);
}


// #include <iostream>
// #include <string>
// #include <map>
// #include <sstream>

// std::string change_number(std::string n) {
// 	std::string number;
// 	std::stringstream s;
// 	int i = atoi(n.c_str());
// 	i--;
// 	if (i < 10)
// 		s << 0;
// 	s << i;
// 	number = s.str();
// 	return (number);
// }

// std::string	change_day(std::string date) {
// 	std::string d;
// 	std::string year;
// 	std::string month;
// 	std::string day;

// 	year.assign(date,0,4);
// 	month.assign(date,5,2);
// 	day.assign(date,8,2);
// 	if (day == "01")
// 	{
// 		day = "31";
// 		if (month == "01")
// 		{
// 			month = "12";
// 			year = change_number(year);
// 		}
// 		else
// 			month = change_number(month);
// 	}
// 	else
// 		day = change_number(day);
// 	d = year + '-' + month + '-' + day;
// 	std::cout << d << std::endl;
// 	return (d);
// }

// int find_value(void) {
// 	std::map<std::string , double> data;

// 	data["2011-01-03"]=1.2;
// 	data["2011-01-04"]=1.0;

// 	for (std::map<std::string,double>::iterator it=data.begin(); it!=data.end(); ++it)
// 		std::cout << it->first << " => " << it->second << '\n';

// 	std::cout << std::endl;

// 	std::map<std::string, double>::iterator it;
// 	std::string date = "2011-02-05";

// 	it = data.find(date);
// 	while (it == data.end() && date != "2011-01-06") {
// 		date = change_day(date);
// 		it = data.find(date);
// 	}
// 	if (it != data.end())
// 		std::cout << it->first << " | " << it->second << std::endl;
// 	else
// 		std::cout << "not found" << std::endl;
// }
