
#include "PmergeMe.hpp"

PmergeMe::PmergeMe() : _element(0), _array(NULL) {}

PmergeMe::PmergeMe(int argc, std::string *str) : _element(argc) {
	this->_array = new int[argc];
	if (!check_str(str)) {
		if (str_to_int(str)) {
			std::vector<int> tmp(this->_array, this->_array + this->_element);
			std::deque<int> tmp2(this->_array, this->_array + this->_element);
			this->_vector = tmp;
			this->_deque = tmp2;
		}
	}
}

PmergeMe::PmergeMe(PmergeMe const &rhs) {}

PmergeMe::~PmergeMe() {
	delete [] this->_array;
}

PmergeMe &PmergeMe::operator=(PmergeMe const &rhs) {
	return (*this);
}

int PmergeMe::check_str(std::string *str) {
	for (int i = 0; i < this->_element; i++) {// check si le dernier element est bien pris en compte
		if (str[i].find_first_not_of("1234567890") != std::string::npos) {
			std::cout << "only postive int are accepted" << std::endl;
			return (1);
		}
	}
	return (0);
}

int PmergeMe::str_to_int(std::string *str) {
	long l;
	for (int i = 0; i < this->_element; i++) {
		l = strtol(str[i].c_str(), NULL, 10);
		if (l > INT_MAX) {
			std::cout << "only postive int are accepted" << std::endl;
			return (1);
		}
		this->_array[i] = l;
	}
	return (0);
}