#include <vector>
#include <map>

bool containsDuplicate(std::vector<int>& nums) {
    std::map<int, int> count;
    for (const auto& i : nums)
    {
        count[i]++;
    }

    for (const auto& j : count)
    {
        if (j.second > 1)
        {
            return true;
        }
    }
    return false;
}