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
		std::map<char,int>::iterator itlow,itup;

		mymap['a']=20;
		mymap['b']=40;
		mymap['c']=60;
		mymap['d']=80;
		mymap['e']=100;

		itlow=mymap.lower_bound ('b');  // itlow points to b
		itup=mymap.upper_bound ('d');   // itup points to e (not d!)

		mymap.erase(itlow,itup);        // erases [itlow,itup)

		// print content:
		for (std::map<char,int>::iterator it=mymap.begin(); it!=mymap.end(); ++it)
			std::cout << it->first << " => " << it->second << '\n';

		/*************		END		*************/

	}
	else if (std::string(argv[1]).compare("2") == 0) // test user's
	{
		/*************		INIT	*************/
		
		ft::map<char,int> mymap;
		ft::map<char,int>::iterator itlow,itup;

		mymap['a']=20;
		mymap['b']=40;
		mymap['c']=60;
		mymap['d']=80;
		mymap['e']=100;

		itlow=mymap.lower_bound ('b');  // itlow points to b
		itup=mymap.upper_bound ('d');   // itup points to e (not d!)

		mymap.erase(itlow,itup);        // erases [itlow,itup)

		// print content:
		for (ft::map<char,int>::iterator it=mymap.begin(); it!=mymap.end(); ++it)
			std::cout << it->first << " => " << it->second << '\n';
			
		/*************		END		*************/
	}
	else
	{
		std::cout << "Error: arguments\n";
		return 0;
	}

	return 0;
}