
#ifndef PMERGEME_HPP
 #define PMERGEME_HPP

# include <iostream>
# include <string>
# include <vector>
# include <deque>

class PmergeMe
{
	private:
		size_t	_element;
		int		*_array;
		std::vector<int> _vector;
		std::deque<int> _deque;
		int check_str(std::string *str);
		int str_to_int(std::string *str);

	public:
		PmergeMe();
		PmergeMe(int argc, std::string *str);
		PmergeMe(PmergeMe const &src);
		~PmergeMe();

		PmergeMe &operator=(PmergeMe const &rhs);
};

#endif
