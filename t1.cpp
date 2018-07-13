#include <iostream>
#include <vector>
#include <unordered_map>

// Given nums = [2, 7, 11, 15], target = 9,
// Because nums[0] + nums[1] = 2 + 7 = 9,
// return [0, 1].

std::vector<int> twoSum(const std::vector<int>& nums, const int& target)
{
    std::unordered_map<int,int> complements;
    for(int i = 0; i < nums.size(); ++i)
    {
        int complement = target - nums[i];
        if(complements.count(complement))
            return {complements[complement],i};
        complements.emplace(nums[i],i);
    }
}
int main()
{
    std::vector<int> v = {2, 7, 11, 15};
    for(const auto& el : twoSum(v,18))
        std::cout << el << " ";
    std::cout << std::endl;
}
