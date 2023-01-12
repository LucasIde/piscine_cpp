
#include "Convertor.hpp"

Convertor::Convertor() : _toconvert(""), _char('\0'), _int(0), _float(0.0f), _double(0.0) {}

Convertor::Convertor(const std::string &toconvert) : _toconvert(toconvert) {
	if (toconvert.empty())
		throw(Convertor::EmptyString());
	//check inf nan
	this->_cast = atof(toconvert.c_str());
	if (to_char())
		//check impossible
	to_int();
	to_float();
	to_double();
}

Convertor::Convertor(Convertor const &rhs) : _toconvert(rhs._toconvert), _char(rhs._char), _int(rhs._int), _float(rhs._float), _double(rhs._double) {}

Convertor::~Convertor() {}

Convertor &Convertor::operator=(Convertor const &rhs) {
	return (*this);
}

bool	Convertor::to_char() {
}

bool	Convertor::to_int() {}

bool	Convertor::to_float() {}

bool	Convertor::to_double() {}

const char *Convertor::EmptyString::what() const throw() {
	return ("need a value to convert");
}
