
#include "RPN.hpp"

RPN::RPN() {}

RPN::RPN(const std::string rhs) {
	create_stack(rhs);
	execute_RPN();
}

RPN::RPN(RPN const &rhs) {}

RPN::~RPN() {}

RPN &RPN::operator=(RPN const &rhs) {
	return (*this);
}

void RPN::create_stack(std::string rhs) {
	std::stack<std::string> tmp;
	size_t pos = 0;
	size_t sp;

	if (rhs.find_first_not_of("123456789+-/*") != std::string::npos) {
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
	std::string tmp;
	int i;
	int j;

	while(!this->_stack.empty())
	{
		//marche pas pour l'étape d'apres;
		tmp = this->_stack.top();
		if (tmp.find_first_not_of("123456789") != std::string::npos)
		{
			std::cout << "error" << std::endl;
			return;
		}
		i = atoi(tmp.c_str());
		tmp = this->_stack.top();
		if (tmp.find_first_not_of("123456789") != std::string::npos)
		{
			std::cout << "error" << std::endl;
			return;
		}
		j = atoi(tmp.c_str());
		if (i > 10 || j > 10 || i < 0 || j < 0)
		{
			std::cout << "Error: number is between 10 and 0" << std::endl;//a refaire
			return;
		}

	}
}

// int main(int argc, char **argv) {
// 	int len = argc - 1;
// 	std::stack<std::string> stack;
// 	while (len != 0)
// 	{
// 		stack.push(argv[len]);
// 		len--;
// 	}
// 	while (!stack.empty())
// 	{
// 	 std::cout << stack.top() << std::endl;
// 	 stack.pop();
// 	}
// 	return (0);
// }