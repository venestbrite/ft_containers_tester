#include "../../vector.hpp"
#include "../../map.hpp"
#include "../../stack.hpp"
#include <stack>
#include <map>
#include <iostream>
#include <string>
#include <time.h>
#include <unistd.h>

#define NAMESPACE ft

#define TESTER_HARD 5000

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "Error: argument\n";
		return 0;
	}
	if (std::string(argv[1]).compare("1") == 0)// test original
	{
		int start = clock();

		std::vector<int> first;
		std::vector<int> second;
		std::vector<int> third;

		first.assign (7,100);             // 7 ints with a value of 100

		std::vector<int>::iterator it;
		it=first.begin()+1;

		second.assign (it,first.end()-1); // the 5 central values of first

		int myints[] = {1776,7,4};
		third.assign (myints,myints+3);   // assigning from array.

		std::vector<int> myvector;

		myvector.push_back(10);

		while (myvector.back() != 0)
			myvector.push_back ( myvector.back() -1 );

		myvector.size();
		first.size();
		third.size();

		myvector.clear();
		first.clear();
		third.clear();
		third.clear();

		if (myvector.empty())
			myvector.push_back(10);
		if (myvector.empty())
			myvector.push_back(10);
		if (first.empty())
			first.push_back(10);
		if (first.empty())
			first.push_back(10);

  		for (int i=1; i<=5; i++) myvector.push_back(i);


		 // erase the 6th element
		myvector.erase (myvector.begin()+5);

		// erase the first 3 elements:
		myvector.erase (myvector.begin(),myvector.begin()+3);

		it = myvector.begin();
  		it = myvector.insert ( it , 200 );

		std::vector<int> anothervector (2,400);
  		myvector.insert (it+2,anothervector.begin(),anothervector.end());

		std::vector<int> foo (3,0);
		std::vector<int> bar (5,0);

		bar = foo;
		foo = std::vector<int>();

		std::vector<int> myvector_2 (10);   // 10 zero-initialized elements
		std::vector<int>::size_type sz = myvector_2.size();

		// assign some values:
		for (unsigned i=0; i<sz; i++) myvector_2[i]=i;

		// reverse vector using operator[]:
		for (unsigned i=0; i<sz/2; i++)
		{
			int temp;
			temp = myvector_2[sz-1-i];
			myvector_2[sz-1-i]=myvector_2[i];
			myvector_2[i]=temp;
		}
		while (!myvector_2.empty())
			myvector_2.pop_back();


		myvector.push_back(100);
		myvector.push_back(200);
		myvector.push_back(300);
		int i = 0;
		std::vector<int>::reverse_iterator rit = myvector.rbegin();
		for (; rit!= myvector.rend(); ++rit)
			*rit = ++i;
		myvector.resize(5);
		myvector.resize(8,100);
		myvector.resize(12);


		std::vector<int> foo_2 (3,100);   // three ints with a value of 100
		std::vector<int> bar_2 (5,200);   // five ints with a value of 200

		foo_2.swap(bar_2);


		std::map<int, int> mymap;
		std::map<int, int> mymap_2;

		for (size_t i = 0; i < TESTER_HARD; i++)
			mymap.insert(std::make_pair(i, i + 2));

		mymap.clear();
		mymap.empty();
		mymap.insert(std::make_pair(10, 20));

		for (size_t i = 0; i < TESTER_HARD; i++)
			mymap.insert(std::make_pair(i, i + 2));
		mymap_2.erase(1);
		mymap.swap(mymap_2);


		std::stack<int> mystack;
		std::stack<int> mystack_2;

		for (size_t i = 0; i < 500000; i++)
			mystack.push(i * 2);
		while (!mystack.empty())
			mystack.pop();
		
		for (size_t i = 0; i < 500000; i++)
			mystack.push(i);

		mystack_2.empty();
		mystack.empty();

		/***********		END *******/
		int end = clock();
		std::cout << end - start;
	}
	else if (std::string(argv[1]).compare("2") == 0) // test user's
	{
		int start = clock();

		NAMESPACE::vector<int> first;
		NAMESPACE::vector<int> second;
		NAMESPACE::vector<int> third;

		first.assign (7,100);             // 7 ints with a value of 100

		NAMESPACE::vector<int>::iterator it;
		it=first.begin()+1;

		second.assign (it,first.end()-1); // the 5 central values of first

		int myints[] = {1776,7,4};
		third.assign (myints,myints+3);   // assigning from array.

		NAMESPACE::vector<int> myvector;

		myvector.push_back(10);

		while (myvector.back() != 0)
			myvector.push_back ( myvector.back() -1 );

		myvector.size();
		first.size();
		third.size();

		myvector.clear();
		first.clear();
		third.clear();
		third.clear();

		if (myvector.empty())
			myvector.push_back(10);
		if (myvector.empty())
			myvector.push_back(10);
		if (first.empty())
			first.push_back(10);
		if (first.empty())
			first.push_back(10);

  		for (int i=1; i<=5; i++) myvector.push_back(i);


		 // erase the 6th element
		myvector.erase (myvector.begin()+5);

		// erase the first 3 elements:
		myvector.erase (myvector.begin(),myvector.begin()+3);

		it = myvector.begin();
  		it = myvector.insert ( it , 200 );

		NAMESPACE::vector<int> anothervector (2,400);
  		myvector.insert (it+2,anothervector.begin(),anothervector.end());

		NAMESPACE::vector<int> foo (3,0);
		NAMESPACE::vector<int> bar (5,0);

		bar = foo;
		foo = NAMESPACE::vector<int>();

		NAMESPACE::vector<int> myvector_2 (10);   // 10 zero-initialized elements
		NAMESPACE::vector<int>::size_type sz = myvector_2.size();

		// assign some values:
		for (unsigned i=0; i<sz; i++) myvector_2[i]=i;

		// reverse vector using operator[]:
		for (unsigned i=0; i<sz/2; i++)
		{
			int temp;
			temp = myvector_2[sz-1-i];
			myvector_2[sz-1-i]=myvector_2[i];
			myvector_2[i]=temp;
		}
		while (!myvector_2.empty())
			myvector_2.pop_back();


		myvector.push_back(100);
		myvector.push_back(200);
		myvector.push_back(300);
		int i = 0;
		NAMESPACE::vector<int>::reverse_iterator rit = myvector.rbegin();
		for (; rit!= myvector.rend(); ++rit)
			*rit = ++i;
		myvector.resize(5);
		myvector.resize(8,100);
		myvector.resize(12);


		NAMESPACE::vector<int> foo_2 (3,100);   // three ints with a value of 100
		NAMESPACE::vector<int> bar_2 (5,200);   // five ints with a value of 200

		foo_2.swap(bar_2);



		NAMESPACE::map<int, int> mymap;
		NAMESPACE::map<int, int> mymap_2;

		for (size_t i = 0; i < TESTER_HARD; i++)
			mymap.insert(NAMESPACE::make_pair(i, i + 2));

		mymap.clear();
		mymap.empty();
		mymap.insert(NAMESPACE::make_pair(10, 20));

		for (size_t i = 0; i < TESTER_HARD; i++)
			mymap.insert(NAMESPACE::make_pair(i, i + 2));
		mymap_2.erase(1);
		mymap.swap(mymap_2);


		NAMESPACE::stack<int> mystack;
		NAMESPACE::stack<int> mystack_2;

		for (size_t i = 0; i < 500000; i++)
			mystack.push(i * 2);
		while (!mystack.empty())
			mystack.pop();
		
		for (size_t i = 0; i < 500000; i++)
			mystack.push(i);

		mystack_2.empty();
		mystack.empty();


		/***********		END *******/
		int end = clock();
		std::cout << end - start;
	}
	else
	{
		std::cout << "Error: arguments\n";
		return 0;
	}
}