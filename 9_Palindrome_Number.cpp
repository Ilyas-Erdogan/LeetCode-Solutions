#include <string>
#include <stack>
#include <deque>

bool isPalindrome(int x)
{
	std::string x_s{ std::to_string(x) };
	std::stack<char> stack;
	std::deque<char> deque;

	for (int i{ 0 }; i < x_s.length(); i++)
	{
		stack.push(x_s.at(i));
		deque.push_back(x_s.at(i));
	}


	for (int j{ 0 }; j < x_s.length(); j++)
	{
		if (stack.top() == deque.front())
		{
			stack.pop();
			deque.pop_front();
		}
		else
		{
			return false;
		}
	}

	return true;
}