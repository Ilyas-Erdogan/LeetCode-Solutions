#include <vector>

std::vector<int> runningSum(std::vector<int>& nums) {
    std::vector<int> sums(nums.size(), 0);
    for (int i{ 0 }; i < nums.size(); i++)
    {
        for (int k{ 0 }; k < (i + 1); k++)
        {
            sums.at(i) += nums.at(k);
        }
    }
    return sums;
}