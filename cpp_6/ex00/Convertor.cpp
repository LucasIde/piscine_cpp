
#include "Convertor.hpp"

Convertor::Convertor() : _cast(0.0), _nan(0) {}

Convertor::Convertor(const std::string &str) : _nan(0) {
	if (str.empty())
		throw(Convertor::EmptyString());
	const char *conv = str.c_str();
	if (!str.compare("nan") || !str.compare("nanf"))
		this->_nan = 1;
	if (str.size() == 1)
	{
		if (isdigit(conv[0]))
			this->_cast = atof(conv);
		else
			this->_cast = static_cast<double>(conv[0]);
	}
	else
	{
		char *end;
		long tmp = strtol(conv, &end, 10);
		if (!*end)
		{
			if (tmp < INT_MIN || tmp > INT_MAX)
				throw(Convertor::BadInput());
			else
				this->_cast = static_cast<double>(tmp);
		}
		else
		{
			end = NULL;
			double tmp2 = strtod(conv, &end);
			if (end[0] == 'f')
				this->_cast = static_cast<double>(tmp2);
			else if (*end)
				throw(Convertor::BadInput());
			else
				this->_cast = tmp2;
		}
	}
}

Convertor::Convertor(Convertor const &rhs) : _cast(rhs._cast), _nan(rhs._nan) {}

Convertor::~Convertor() {}

Convertor &Convertor::operator=(Convertor const &rhs) {
	this->_cast = rhs._cast;
	this->_nan = rhs._nan;
	return (*this);
}

char	Convertor::to_char() const {
	if (this->_cast < 0 || this->_cast > 127 || this->_nan == 1)
		throw (Convertor::Impossible());
	else if (this->_cast < 32 || this->_cast > 126)
		throw (Convertor::NonDisplay());
	else
		return (static_cast<char>(this->_cast));
}

int	Convertor::to_int() const {
	if (this->_cast < INT_MIN || this->_cast > INT_MAX || this->_nan == 1)
		throw (Convertor::Impossible());
	else
		return (static_cast<int>(this->_cast));
}

float	Convertor::to_float() const {
		return (static_cast<float>(this->_cast));
}

double	Convertor::get_cast() const {
	return (this->_cast);
}

const char *Convertor::NonDisplay::what() const throw() {
	return ("Non Displayable");
}

const char *Convertor::Impossible::what() const throw() {
	return ("impossible");
}
const char *Convertor::BadInput::what() const throw() {
	return ("wrong input");
}

const char *Convertor::EmptyString::what() const throw() {
	return ("wrong usage: ./convertor <type>");
}

std::ostream &operator<<(std::ostream &o, Convertor const &rhs) {
	o << "char: ";
	try {
		char a = rhs.to_char();
		o << "\'" << a << "\'" << std::endl;
	}
	catch (std::exception &e) {
		o << e.what() << std::endl;
	}
	o << "int: ";
	try {
		o << rhs.to_int() << std::endl;
	}
	catch (std::exception &e) {
		o << e.what() << std::endl;
	}
	o << "float: ";
	try {
		o << rhs.to_float() << "f" << std::endl;
	}
	catch (std::exception &e) {
		o << e.what() << std::endl;
	}
	o << "double: " << rhs.get_cast() << std::endl;
	return (o);
}
