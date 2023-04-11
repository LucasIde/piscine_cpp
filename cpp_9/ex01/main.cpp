
#include "RPN.hpp"

int main(int argc, char **argv) {
	if (argc < 2) {
		std::cout << "Error: need an equation." << std::endl;
		return (1);
	}
	else if (argc > 2) {
		std::cout << "Error: too many argument." << std::endl;
		return (1);
	}

	RPN equation(argv[1]);
	equation.execute_RPN();
	
	return (0);
}