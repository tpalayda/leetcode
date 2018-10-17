#include <iostream>
#include <algorithm>
#include <iterator>
#include <vector>

/* 15. 3Sum
Given an array nums of n integers, are there elements a, b, c in nums such that a + b + c = 0? Find all unique triplets in the array which gives the sum of zero.
*/
std::vector<std::vector<int>> threeSum(std::vector<int> nums)
{
    std::vector<std::vector<int>> result;
    std::sort(nums.begin(), nums.end());

    for(unsigned i = 0; i < nums.size(); ++i)
    {
        int target = -nums[i];
        int head = i + 1;
        int tail = nums.size() - 1;
        while(head < tail)
        {
            int sum = nums[head] + nums[tail];
            if(sum > target)
                --tail;
            else if(sum < target)
                ++head;
            else // we found our target, just get rid of duplicates
            {
                std::vector<int> temp = {nums[i], nums[head], nums[tail]};
                result.emplace_back(temp);
                while(head < tail && nums[head] == temp[1]) 
                    ++head;
                while(head < tail && nums[tail] == temp[2])
                    --tail;
            }
        }
        while(i < nums.size() - 1 && nums[i+1] == nums[i]) //skip duplicates of 1st num
            ++i;
    }
    return result;
}

int main()
{
    std::vector<std::vector<int>> result = threeSum({-1, 0, 1, 2, -1, -4});
    for(const auto& v : result)
    {
        std::copy(v.begin(), v.end(), std::ostream_iterator<int>(std::cout, " "));
        std::cout << '\n';
    }
}
