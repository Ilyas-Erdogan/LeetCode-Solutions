#include <vector>
#include <map>

int removeDuplicates(std::vector<int>& nums)
{
	std::map<int, int> occurences{};

	for (const auto& i : nums)
	{
		occurences[i]++;
	}

	std::map<int, int>::iterator it{ occurences.begin() };
	for (int j{ 0 }; j < occurences.size(); j++)
	{
		nums[j] = it->first;
		it++;
	}

	return occurences.size();
}