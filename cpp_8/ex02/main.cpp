
#include "MutantStack.hpp"
#include <list>

int main()
{
	//MutantStack
	std::cout << "MutantStack :" << std::endl;
	{
	MutantStack<int> mstack;

	mstack.push(5);
	mstack.push(17);

	std::cout << "top :" << mstack.top() << std::endl;

	mstack.pop();

	std::cout << "size :" << mstack.size() << std::endl;

	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	//[...]
	mstack.push(0);

	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();

	++it;
	--it;

	while (it != ite)
	{
	std::cout << *it << std::endl;
	++it;
	}

	std::cout << std::endl << "const MutantStack :" << std::endl;
	const MutantStack<int> c(mstack);
	MutantStack<int>::const_iterator it2 = c.begin();
	MutantStack<int>::const_iterator ite2 = c.end();
	while (it2 != ite2)
	{
	std::cout << *it2 << std::endl;
	++it2;
	}


	std::stack<int> s(mstack);
	}

	//List
	std::cout << std::endl << "List :" << std::endl;
	{
	std::list<int> mstack;

	mstack.push_back(5);
	mstack.push_back(17);

	std::cout << "top :" << mstack.back() << std::endl;

	mstack.pop_back();

	std::cout << "size :" << mstack.size() << std::endl;

	mstack.push_back(3);
	mstack.push_back(5);
	mstack.push_back(737);
	//[...]
	mstack.push_back(0);

	std::list<int>::iterator it = mstack.begin();
	std::list<int>::iterator ite = mstack.end();

	++it;
	--it;

	while (it != ite)
	{
	std::cout << *it << std::endl;
	++it;
	}
	std::list<int> s(mstack);
	}
	return 0;
}
