#include <string>
#include <stack>

int romanToInt(std::string s) {
	std::stack<char> stack;
	char prev{};
	int total{ 0 };

	for (const auto& i : s)
	{
		stack.push(i);
	}

	while (!stack.empty())
	{
		if (stack.top() == 'I')
		{
			if (prev == 'V' || prev == 'X')
			{
				total -= 1;
			}
			else
			{
				total += 1;
			}
		}
		else if (stack.top() == 'V')
		{
			total += 5;
		}
		else if (stack.top() == 'X')
		{
			if (prev == 'L' || prev == 'C')
			{
				total -= 10;
			}
			else
			{
				total += 10;
			}
		}
		else if (stack.top() == 'L')
		{
			total += 50;
		}
		else if (stack.top() == 'C')
		{
			if (prev == 'D' || prev == 'M')
			{
				total -= 100;
			}
			else
			{
				total += 100;
			}
		}
		else if (stack.top() == 'D')
		{
			total += 500;
		}
		else if (stack.top() == 'M')
		{
			total += 1000;
		}
		prev = stack.top();
		stack.pop();
	}
	return total;
}