
#include "PmergeMe.hpp"

int main(int argc, char **argv) {
	std::string str[argc - 1];
	if (argc <= 1)
		std::cout << "need something to sort" << std::endl;
	for (int i = 0; i < argc - 1;i++)
		str[i] = argv[i + 1];
	PmergeMe(argc - 1, str);
}