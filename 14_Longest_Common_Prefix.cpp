#include <string>
#include <vector>

std::string longestCommonPrefix(std::vector<std::string>& strs) {
	std::string final{ "" };
	int smallest{ 201 }; // constraint + 1

	for (auto it = strs.begin(); it != strs.end(); it++)
	{
		if ((*it).length() < smallest)
		{
			smallest = (*it).length();
		}
	}

	char prev{};
	int i{ 0 };
	bool cont{ true };
	while (i < smallest && cont)
	{
		for (auto it = strs.begin(); it != strs.end(); it++)
		{
			if (*it == strs.at(0))
			{
				prev = (*it)[i];
			}
			else if ((*it)[i] != prev)
			{
				cont = false;
			}
		}
		if (cont)
			final.append(1, prev);
		i++;
	}

	return final;
}