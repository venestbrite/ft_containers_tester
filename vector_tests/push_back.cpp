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

		myvector.push_back(10);
		myvector.push_back(10);

		int i = 0;
		while (i < 100)
			myvector.push_back(i++);

		std::cout << "myvector stores " << int(myvector.size()) << " numbers.\n";


		/*************		END		*************/

	}
	else if (std::string(argv[1]).compare("2") == 0) // test user's
	{
		/*************		INIT	*************/
				
		ft::vector<int> myvector;

		myvector.push_back(10);
		myvector.push_back(10);


		int i = 0;
		while (i < 100)
			myvector.push_back(i++);


		std::cout << "myvector stores " << int(myvector.size()) << " numbers.\n";

			
		/*************		END		*************/
	}
	else
	{
		std::cout << "Error: arguments\n";
		return 0;
	}

	return 0;
}