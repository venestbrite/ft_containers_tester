#include <iostream>
#include <stack>
#include "../../stack.hpp"

int main (int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "Error: arguments\n";
		return 0;
	}
	if (std::string(argv[1]).compare("1") == 0) // test original
	{
		/*************		INIT	*************/

		std::stack<int> mystack;
		int sum (0);

		for (int i=1;i<=10;i++) mystack.push(i);

		while (!mystack.empty())
		{
			sum += mystack.top();
			mystack.pop();
		}
		if (mystack.empty())
			std::cout << "Stack is empty\n";
		else
			std::cout << "Stack NOT empty\n";
		
		mystack.push(10);

		if (mystack.empty())
			std::cout << "Stack is empty\n";
		else
			std::cout << "Stack NOT empty\n";

		std::cout << "total: " << sum << '\n';

		/*************		END		*************/

	}
	else if (std::string(argv[1]).compare("2") == 0) // test user's
	{
		/*************		INIT	*************/

		ft::stack<int> mystack;
		int sum (0);

		for (int i=1;i<=10;i++) mystack.push(i);

		while (!mystack.empty())
		{
			sum += mystack.top();
			mystack.pop();
		}

		if (mystack.empty())
			std::cout << "Stack is empty\n";
		else
			std::cout << "Stack NOT empty\n";
		
		mystack.push(10);

		if (mystack.empty())
			std::cout << "Stack is empty\n";
		else
			std::cout << "Stack NOT empty\n";

		std::cout << "total: " << sum << '\n';
			
		/*************		END		*************/
	}
	else
	{
		std::cout << "Error: arguments\n";
		return 0;
	}

	return 0;
}