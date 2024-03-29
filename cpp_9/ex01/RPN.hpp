
#ifndef RPN_HPP
 #define RPN_HPP

# include <string>
# include <stack>
# include <iostream>
# include <cstdlib>

class RPN
{
	private:
		std::stack<std::string> _stack;
		void create_stack(std::string);

	public:
		RPN();
		RPN(const std::string rhs);
		RPN(RPN const &src);
		~RPN();

		RPN &operator=(RPN const &rhs);

		void execute_RPN();
};

#endif
