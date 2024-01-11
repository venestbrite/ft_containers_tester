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

		std::map<char,int> mymap;
		mymap['a']=101;
		mymap['b']=202;
		mymap['c']=302;

		std::cout << "mymap.size() is " << mymap.size() << '\n';

		/*************		END		*************/

	}
	else if (std::string(argv[1]).compare("2") == 0) // test user's
	{
		/*************		INIT	*************/
		

		ft::map<char,int> mymap;
		mymap['a']=101;
		mymap['b']=202;
		mymap['c']=302;

		std::cout << "mymap.size() is " << mymap.size() << '\n';
			
		/*************		END		*************/
	}
	else
	{
		std::cout << "Error: arguments\n";
		return 0;
	}

	return 0;
}