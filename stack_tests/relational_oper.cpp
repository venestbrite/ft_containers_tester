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

		std::stack<int> myints;
		std::stack<int> stack_2;
		for (int i=0; i<5; i++) myints.push(i);

		std::cout << (myints == stack_2) << '\n';
		std::cout << (myints != stack_2) << '\n';
		std::cout << (myints > stack_2) << '\n';
		std::cout << (myints < stack_2) << '\n';
		std::cout << (myints >= stack_2) << '\n';
		std::cout << (myints <= stack_2) << '\n';

		for (int i=0; i<5; i++) stack_2.push(i);
		
		std::cout << (myints == stack_2) << '\n';
		std::cout << (myints != stack_2) << '\n';
		std::cout << (myints > stack_2) << '\n';
		std::cout << (myints < stack_2) << '\n';
		std::cout << (myints >= stack_2) << '\n';
		std::cout << (myints <= stack_2) << '\n';

		/*************		END		*************/

	}
	else if (std::string(argv[1]).compare("2") == 0) // test user's
	{
		/*************		INIT	*************/

		ft::stack<int> myints;
		ft::stack<int> stack_2;
		for (int i=0; i<5; i++) myints.push(i);

		std::cout << (myints == stack_2) << '\n';
		std::cout << (myints != stack_2) << '\n';
		std::cout << (myints > stack_2) << '\n';
		std::cout << (myints < stack_2) << '\n';
		std::cout << (myints >= stack_2) << '\n';
		std::cout << (myints <= stack_2) << '\n';

		for (int i=0; i<5; i++) stack_2.push(i);

		std::cout << (myints == stack_2) << '\n';
		std::cout << (myints != stack_2) << '\n';
		std::cout << (myints > stack_2) << '\n';
		std::cout << (myints < stack_2) << '\n';
		std::cout << (myints >= stack_2) << '\n';
		std::cout << (myints <= stack_2) << '\n';

			
		/*************		END		*************/
	}
	else
	{
		std::cout << "Error: arguments\n";
		return 0;
	}

	return 0;
}