
#include "Convertor.hpp"

int	main(int argc, char **argv) {
	if (argc < 2)
	{
		std::cout << "need a value to convert" << std::endl;
		return (1);
	}
	else if (argc > 2)
	{
		std::cout << "can't convert multiple value" << std::endl;
		return (1);
	}
	try {
		Convertor tmp(argv[1]);
		std::cout << tmp;
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
}
