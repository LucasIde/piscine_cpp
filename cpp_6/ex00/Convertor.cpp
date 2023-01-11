
#include "Convertor.hpp"

Convertor::Convertor() : _toconvert(""), _char('\0'), _int(0), _float(0.0f), _double(0.0) {}

Convertor::Convertor(const std::string &toconvert) : _toconvert(toconvert) {
	this->_char = to_char();
	this->_int = to_int();
	this->_float = to_float();
	this->_double = to_double();
}

Convertor::Convertor(Convertor const &rhs) : _toconvert(rhs._toconvert), _char(rhs._char), _int(rhs._int), _float(rhs._float), _double(rhs._double) {}

Convertor::~Convertor() {}

Convertor &Convertor::operator=(Convertor const &rhs) {
	return (*this);
}

char Convertor::to_char() {
}

int	Convertor::to_int() {}

float	Convertor::to_float() {}

double	Convertor::to_double() {}
