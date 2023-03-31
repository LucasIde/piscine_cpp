
#include "RPN.hpp"

RPN::RPN() {}

RPN::RPN(const std::string rhs) {
	create_stack(rhs);
	execute_RPN();
}

RPN::RPN(RPN const &rhs) {*this = rhs;}

RPN::~RPN() {}

RPN &RPN::operator=(RPN const &rhs) {
	(void)rhs;// a modifier
	return (*this);
}

void RPN::create_stack(std::string rhs) {
	std::stack<std::string> tmp;
	size_t pos = 0;
	size_t sp;

	//probleme avec la gestion de ma stack espace ou il ne devrait pas
	if (rhs.find_first_not_of("123456789+-/* ") != std::string::npos) {
		std::cout << "only charchaters (123456789+-/*) are accepted. Number also always be less than 10." << std::endl;
		return;
	}
	sp = rhs.find(" ");
	while (sp != std::string::npos)
	{
		tmp.push(rhs.assign(pos, sp - pos));
		pos = sp + 1;
		sp = rhs.find(" ", pos);
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
	int i = -1;
	int j = -1;

	while(!this->_stack.empty())
	{
		tmp = this->_stack.top();
		if (tmp.find_first_not_of("123456789") != std::string::npos && i == -1 && j == -1)
		{
			std::cout << "error" << std::endl;
			return;
		}
		if (tmp.find_first_not_of("123456789") == std::string::npos) {
			nb = atoi(tmp.c_str());
			if (nb < 1 || nb > 10)
			{
				std::cout << "Error: number need to be between 10 and 1" << std::endl;//a refaire
				return;
			}
			if (i == -1)
				i = nb;
			else if (j == -1)
				j = nb;
			else {
				stack2.push(i);
				i = j;
				j = -1;
			}
		}
		else {
			if (j == -1)
			{
				if (stack2.empty()){
					std::cout << "Error: " << std::endl;
					return;
				}
				j = i;
				i = stack2.top();
				stack2.pop();
			}
			nb = tmp[0];
			switch (nb) {
				case '+': i = i + j;
					break; 
				case '-': i = i - j;
					break; 
				case '/': i = i / j;
					break; 
				case '*': i = i * j;
					break; 
			}
		}
		std::cout << i <<std::endl;
	}
}
