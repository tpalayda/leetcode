#include <iostream>
#include <iterator>
#include <algorithm>
#include <vector>

/*
18. 4Sum
Given an array nums of n integers and an integer target, are there elements a, b, c, and d in nums such that a + b + c + d = target? Find all unique quadruplets in the array which gives the sum of target.

Note:
The solution set must not contain duplicate quadruplets.
*/
std::vector<std::vector<int>> fourSum(std::vector<int> nums, const int& target)
{
    std::vector<std::vector<int>> result;
    std::sort(nums.begin(), nums.end());
    for(unsigned i = 0; i < nums.size(); ++i)
    {
        for(unsigned j = i + 1; j < nums.size(); ++j)
        {
            int head = j + 1;
            int tail = nums.size() - 1;
            while(head < tail)
            {
                int currentSum = nums[i] + nums[j] + nums[head] + nums[tail];
                if(currentSum > target)
                    --tail;
                else if(currentSum < target)
                    ++head;
                else 
                {
                    std::vector<int> temp = {nums[i], nums[j], nums[head], nums[tail]};
                    result.emplace_back(temp);
                    while(head < tail && nums[head] == temp[2])
                        ++head;
                    while(tail > head && nums[tail] == temp[3])
                        --tail;
                }
            }
            while(j < nums.size() - 1 && nums[j+1] == nums[j])
                ++j;
        }
        while(i < nums.size() - 1 && nums[i+1] == nums[i])
            ++i;
    }
    return result;
}

int main()
{
    std::vector<std::vector<int>> result = fourSum({-3, -2, -1, 0, 0, 1, 2, 3}, 0);    
    for(const auto& v : result)
    {
        std::copy(v.begin(), v.end(), std::ostream_iterator<int>(std::cout, " "));
        std::cout << '\n';
    }
}
