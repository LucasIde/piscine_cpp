
#include "PmergeMe.hpp"

PmergeMe::PmergeMe() : _element(0), _array(NULL) {}

PmergeMe::PmergeMe(int argc, std::string *str) : _element(argc) {

	if (!create_vector(str))
		create_deque(str);
}

PmergeMe::PmergeMe(PmergeMe const &) {}

PmergeMe::~PmergeMe() {}

PmergeMe &PmergeMe::operator=(PmergeMe const &) {
	return (*this);
}

void PmergeMe::print_sort(std::string *str) {
		std::cout << "Before: ";
	for (size_t i = 0; i < this->_element; i++)
		std::cout << str[i] << " ";
	std::cout << std::endl;
		std::cout << "After: ";
	for (std::vector<int>::iterator it = this->_vector.begin(); it < this->_vector.end(); it++)
		std::cout << *it << " ";
	std::cout << std::endl;
}

int PmergeMe::create_vector(std::string *str) {
    clock_t time;

    time = clock();
	this->_array = new int[_element];
	if (check_str(str))
		return (1);
	if (str_to_int(str))
		return (1);
	std::vector<int> tmp(this->_array, this->_array + this->_element);
	this->_vector = tmp;
	delete [] this->_array;
	sort_vector();
    time = clock() - time;
	print_sort(str);
	std::cout << "Time to process a range of " << this->_element << " elements with std::vector : " << (((double)time) / CLOCKS_PER_SEC) << " second" << std::endl;
	return (0);
}

int PmergeMe::create_deque(std::string *str) {
    clock_t time;
	
    time = clock();
	this->_array = new int[_element];
	if (check_str(str))
		return (1);
	if (str_to_int(str))
		return (1);
	std::deque<int> tmp(this->_array, this->_array + this->_element);
	this->_deque = tmp;
	delete [] this->_array;
	sort_deque();
    time = clock() - time;
	std::cout << "Time to process a range of " << this->_element << " elements with std::deque : " << ((double)time) / CLOCKS_PER_SEC << " second" << std::endl;
	return (0);
}

int PmergeMe::check_str(std::string *str) {
	for (size_t i = 0; i < this->_element; i++) {
		if (str[i].find_first_not_of("1234567890") != std::string::npos) {
			std::cout << "only postive int are accepted" << std::endl;
			return (1);
		}
	}
	return (0);
}

int PmergeMe::str_to_int(std::string *str) {
	long l;
	for (size_t i = 0; i < this->_element; i++) {
		l = strtol(str[i].c_str(), NULL, 10);
		if (l > INT_MAX) {
			std::cout << "only postive int are accepted" << std::endl;
			return (1);
		}
		this->_array[i] = l;
	}
	return (0);
}

//sort deque

void swap_content(std::deque<int> &pair) {
	int tmp;
	tmp = pair[0];
	pair[0] = pair[1];
	pair[1] = tmp;
}

int in_order(std::deque<int> *pair, int len) {
	for (int j = 0; j < len - 1; j++)
		if (pair[j] > pair[j + 1])
			return (1);
	return (0);
}

void insert_content(int pair, std::deque<int> &sorted) {
	std::deque<int>::iterator it;
	std::deque<int>::iterator end;
	
	end =sorted.end();
	for (it = sorted.begin(); it < end; it++) {
		if (*it > pair){
			sorted.insert(it, pair);
			break;
		}
		else if (it + 1 == end){
			sorted.push_back(pair);
			break;
		}
	}
}

void PmergeMe::sort_deque(void) {
	int len = this->_element / 2;
	std::deque<int> pair[len];
	std::deque<int> sorted;
	
	for (int j = 0; j < len; j++) {
		std::deque<int> tmp(this->_deque.begin() + (j * 2), this->_deque.begin() + (j * 2) + 2);
		pair[j] = tmp;
	}
	for (int j = 0; j < len; j++) 
		if (pair[j][0] > pair[j][1])
			swap_content(pair[j]);
	while(in_order(pair, len)) {
		for (int j = 0; j < len-1; j++) {
			if (pair[j] > pair[j+1])
				pair[j].swap(pair[j+1]);
		}
	}
	for (int j = 0; j < len; j++)
		sorted.push_back(pair[j][0]);
	for (int j = 0; j < len; j++)
		insert_content(pair[j][1], sorted);
	if (this->_element % 2)
		insert_content(this->_deque[this->_element - 1], sorted);
	this->_deque = sorted;
}

//sort vector

void swap_content(std::vector<int> &pair) {
	int tmp;
	tmp = pair[0];
	pair[0] = pair[1];
	pair[1] = tmp;
}

int in_order(std::vector<int> *pair, int len) {
	for (int j = 0; j < len - 1; j++)
		if (pair[j] > pair[j + 1])
			return (1);
	return (0);
}

void insert_content(int pair, std::vector<int> &sorted) {
	std::vector<int>::iterator it;
	std::vector<int>::iterator end;
	
	end =sorted.end();
	for (it = sorted.begin(); it < end; it++) {
		if (*it > pair){
			sorted.insert(it, pair);
			break;
		}
		else if (it + 1 == end){
			sorted.push_back(pair);
			break;
		}
	}
}

void PmergeMe::sort_vector(void) {
	int len = this->_element / 2;
	std::vector<int> pair[len];
	std::vector<int> sorted;
	
	for (int j = 0; j < len; j++) {
		std::vector<int> tmp(this->_vector.begin() + (j * 2), this->_vector.begin() + (j * 2) + 2);
		pair[j] = tmp;
	}
	for (int j = 0; j < len; j++) 
		if (pair[j][0] > pair[j][1])
			swap_content(pair[j]);
	while(in_order(pair, len)) {
		for (int j = 0; j < len-1; j++) {
			if (pair[j] > pair[j+1])
				pair[j].swap(pair[j+1]);
		}
	}
	for (int j = 0; j < len; j++)
		sorted.push_back(pair[j][0]);
	for (int j = 0; j < len; j++)
		insert_content(pair[j][1], sorted);
	if (this->_element % 2)
		insert_content(this->_vector[this->_element - 1], sorted);
	this->_vector = sorted;
}