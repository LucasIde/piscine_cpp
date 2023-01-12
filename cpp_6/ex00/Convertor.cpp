
#include "Convertor.hpp"

Convertor::Convertor() : _toconvert(""), _char('\0'), _int(0), _float(0.0f), _double(0.0) {}

Convertor::Convertor(const std::string &toconvert) : _toconvert(toconvert) {
	char *end;
	if (toconvert.empty())
		throw(Convertor::EmptyString());
	//check inf nan
	this->_cast = strtof(toconvert.c_str(), &end);
	//check erreur
	to_char();
	to_int();
	to_float();
	to_double();
}

Convertor::Convertor(Convertor const &rhs) : _toconvert(rhs._toconvert), _char(rhs._char), _int(rhs._int), _float(rhs._float), _double(rhs._double) {}

Convertor::~Convertor() {}

Convertor &Convertor::operator=(Convertor const &rhs) {
	return (*this);
}

void	Convertor::to_char() {
	if (this->_cast < 0 || this->_cast > 127)
		std::cout << "char: impossible" << std::endl;
	if (this->_cast < 33 || this->_cast > 126)
	{
		std::cout << "char: Non displayable" << std::endl;
		this->_char = static_cast<char>(this->_cast);
	}
	else
	{
		this->_char = static_cast<char>(this->_cast);
		std::cout << "char: \'" << this->_char << "\'" << std::endl;
	}
}

void	Convertor::to_int() {
	if (this->_cast < INT_MIN || this->_cast > INT_MAX)
		std::cout << "int: impossible" << std::endl;
	else
	{
		this->_int = static_cast<int>(this->_cast);
		std::cout << "int: " << this->_int << std::endl;
	}
}

void	Convertor::to_float() {
	if (this->_cast < FLT_MIN || this->_cast > FLT_MAX)
		std::cout << "float: impossible" << std::endl;
	else
	{
		this->_float = static_cast<float>(this->_cast);
		std::cout << "float: " << this->_float << std::endl;
	}
}

void	Convertor::to_double() {
	this->_double = this->_cast;
	std::cout << "double: " << this->_double << std::endl;
}

const char *Convertor::EmptyString::what() const throw() {
	return ("need a value to convert");
}
