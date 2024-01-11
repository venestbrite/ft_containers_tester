#include <iostream>
#include <map>
#include "../../map.hpp"

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

		int psize;
		std::map<char,int> mymap;
		std::pair<const char,int>* p;

		// allocate an array of 5 elements using mymap's allocator:
		p=mymap.get_allocator().allocate(5);

		// assign some values to array
		psize = sizeof(std::map<char,int>::value_type)*5;

		std::cout << "The allocated array has a size of " << psize << " bytes.\n";

		mymap.get_allocator().deallocate(p,5);


		/*************		END		*************/

	}
	else if (std::string(argv[1]).compare("2") == 0) // test user's
	{
		/*************		INIT	*************/
		
		int psize;
		ft::map<char,int> mymap;
		ft::pair<const char,int>* p;

		// allocate an array of 5 elements using mymap's allocator:
		p=mymap.get_allocator().allocate(5);

		// assign some values to array
		psize = sizeof(ft::map<char,int>::value_type)*5;

		std::cout << "The allocated array has a size of " << psize << " bytes.\n";

		mymap.get_allocator().deallocate(p,5);
			
		/*************		END		*************/
	}
	else
	{
		std::cout << "Error: arguments\n";
		return 0;
	}

	return 0;
}