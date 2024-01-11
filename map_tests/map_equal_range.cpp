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

		mymap['a']=10;
		mymap['b']=20;
		mymap['c']=30;

		std::pair<std::map<char,int>::iterator,std::map<char,int>::iterator> ret;
		ret = mymap.equal_range('b');

		std::cout << "lower bound points to: ";
		std::cout << ret.first->first << " => " << ret.first->second << '\n';

		std::cout << "upper bound points to: ";
		std::cout << ret.second->first << " => " << ret.second->second << '\n';
		


		/*************		END		*************/

	}
	else if (std::string(argv[1]).compare("2") == 0) // test user's
	{
		/*************		INIT	*************/
		
		ft::map<char,int> mymap;

		mymap['a']=10;
		mymap['b']=20;
		mymap['c']=30;

		ft::pair<ft::map<char,int>::iterator,ft::map<char,int>::iterator> ret;
		ret = mymap.equal_range('b');

		std::cout << "lower bound points to: ";
		std::cout << ret.first->first << " => " << ret.first->second << '\n';

		std::cout << "upper bound points to: ";
		std::cout << ret.second->first << " => " << ret.second->second << '\n';
			
		/*************		END		*************/
	}
	else
	{
		std::cout << "Error: arguments\n";
		return 0;
	}

	return 0;
}