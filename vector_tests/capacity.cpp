#include <iostream>
#include <vector>
#include "../../vector.hpp"

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

		std::vector<int> myvector;

		// set some content in the vector:
		for (int i=0; i<100; i++) myvector.push_back(i);

		std::cout << "size: " << (int) myvector.size() << '\n';
		std::cout << "capacity: " << (int) myvector.capacity() << '\n';
		std::cout << "max_size: " << (int) myvector.max_size() << '\n';

		/*************		END		*************/

	}
	else if (std::string(argv[1]).compare("2") == 0) // test user's
	{
		/*************		INIT	*************/

		ft::vector<int> myvector;

		// set some content in the vector:
		for (int i=0; i<100; i++) myvector.push_back(i);

		std::cout << "size: " << (int) myvector.size() << '\n';
		std::cout << "capacity: " << (int) myvector.capacity() << '\n';
		std::cout << "max_size: " << (int) myvector.max_size() << '\n';
			
		/*************		END		*************/
	}
	else
	{
		std::cout << "Error: arguments\n";
		return 0;
	}

	return 0;
}