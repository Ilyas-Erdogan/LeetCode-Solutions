#include <iostream>
#include <vector>
#include <string>
#include <stack>
#include <deque>
#include <map>


bool isValid(std::string s) {
	std::stack<char> stack1;
	for (const auto& i : s)
	{
		switch (i)
		{
		case '{':
		case '[':
		case '(':
			stack1.push(i);
			break;
		case '}':
			if (!stack1.empty() && stack1.top() == '{')
				stack1.pop();
			break;
		case ']':
			if (!stack1.empty() && stack1.top() == '[')
				stack1.pop();
			break;
		case ')':
			if (!stack1.empty() && stack1.top() == '(')
				stack1.pop();
			break;
		}
	}
	if (stack1.empty())
		return true;
	return false;
}



int main()
{

	return 0;
}