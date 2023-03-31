
#ifndef RPN_HPP
 #define RPN_HPP

# include <string>
# include <stack>
# include <iostream>

class RPN
{
	private:
		std::stack<std::string> _stack;
		void create_stack(std::string);
		void execute_RPN();

	public:
		RPN();
		RPN(const std::string rhs);
		RPN(RPN const &src);
		~RPN();

		RPN &operator=(RPN const &rhs);
};

#endif
