
#include "Convertor.hpp"

int	main(int argc, char **argv) {
	if (argc != 2)
	{
		std::cout << "can't convert multiple value" << std::endl;
		return (1);
	}
	const std::string tmp = argv[1];
	try {
		Convertor tmp(tmp);
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
}
