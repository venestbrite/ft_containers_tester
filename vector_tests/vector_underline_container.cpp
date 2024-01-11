#include "../../vector.hpp"

#include <stack>

int main(int argc, char **argv)
{
	std::stack<int, ft::vector<int> > my_stack;

	my_stack.push(10);
	my_stack.push(20);

	std::cout << my_stack.top() << '\n';
	my_stack.pop();
	std::cout << my_stack.top() << '\n';	

}