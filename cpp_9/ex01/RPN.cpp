
#include "RPN.hpp"

RPN::RPN() {}

RPN::RPN(const std::string rhs) {
	create_stack(rhs);
	// execute_RPN();
}

RPN::RPN(RPN const &rhs) {*this = rhs;}

RPN::~RPN() {}

RPN &RPN::operator=(RPN const &rhs) {
	this->_stack = rhs._stack;
	return (*this);
}

void RPN::create_stack(std::string rhs) {
	std::stack<std::string> tmp;
	std::string str;
	size_t pos = 0;
	size_t len = rhs.length();
	size_t sp;

	if (rhs.find_first_not_of("123456789+-/* ") != std::string::npos) {
		std::cout << "only charchaters (123456789+-/*) are accepted. Number also need to be less than 10." << std::endl;
		return;
	}
	sp = rhs.find(" ");
	while (sp != std::string::npos)
	{
		str.assign(rhs, pos, sp - pos);
		tmp.push(str);
		pos = sp + 1;
		sp = rhs.find(" ", pos);
		if (sp == std::string::npos){
			str.assign(rhs, pos, len - pos);
			tmp.push(str);
		}
	}
	while(!tmp.empty()) {
		this->_stack.push(tmp.top());
		tmp.pop();
	}
}

void RPN::execute_RPN() {
	std::stack<int> stack2;
	std::string tmp;
	int nb;
	int i = -2147483648;
	int j = -2147483648;

	if (this->_stack.empty()) {
		std::cout << "can't execute without equation" << std::endl;
		return;
	}
	while(!this->_stack.empty())
	{
		tmp = this->_stack.top();
		if (tmp.find_first_not_of("123456789") != std::string::npos && i == -2147483648 && j == -2147483648)
		{
			std::cout << "Error: operation can be the first character" << std::endl;
			return;
		}
		if (tmp.find_first_not_of("123456789") == std::string::npos) {
			nb = atoi(tmp.c_str());
			if (nb < 1 || nb > 10)
			{
				std::cout << "Error: number need to be between 1 and 10" << std::endl;
				return;
			}
			if (i == -2147483648)
				i = nb;
			else if (j == -2147483648)
				j = nb;
			else {
				stack2.push(i);
				i = j;
				j = nb;
			}
		}
		else {
			if (j == -2147483648)
			{
				if (stack2.empty()){
					std::cout << "Error: impossible equation" << std::endl;
					return;
				}
				j = i;
				i = stack2.top();
				stack2.pop();
			}
			nb = tmp[0];
			switch (nb) {
				case '+': i = i + j;
					j = -2147483648;
					break; 
				case '-': i = i - j;
					j = -2147483648;
					break; 
				case '/': i = i / j;
					j = -2147483648;
					break; 
				case '*': i = i * j;
					j = -2147483648;
					break; 
			}
		}
		this->_stack.pop();
	}
	if (!stack2.empty()) {
		std::cout << "Error: missing operator" << std::endl;
		return;
	}
	std::cout << i <<std::endl;
}
