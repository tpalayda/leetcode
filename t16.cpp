#include <iostream>
#include <algorithm>
#include <vector>

// 16. 3Sum Closest
// Given an array nums of n integers and an integer target, find three integers in nums such that the sum is closest to target. Return the sum of the three integers. You may assume that each input would have exactly one solution.

int threeSumClosest(std::vector<int> nums, const int& target)
{
    if(nums.size() < 4)
        return std::accumulate(nums.begin(), nums.end(), 0);
    int result = nums[0] + nums[1] + nums[2];
    std::sort(nums.begin(), nums.end());

    for(unsigned i = 0; i < nums.size(); ++i)
    {
        for(unsigned j = i + 1, q = nums.size() - 1; j < q;)
        {
            int currentSum = nums[i] + nums[j] + nums[q];
            if(currentSum == target)
                return currentSum;
            if(std::abs(result - target) > std::abs(currentSum - target) )
                result = currentSum;
            currentSum > target ? --q : ++j;
        }
    }
    return result;
}

int main()
{
    std::cout << threeSumClosest({-1, 2, 1, -4}, 1) << std::endl; //2
    std::cout << threeSumClosest({1, 1, 1, 0}, -100) << std::endl; //2
}
