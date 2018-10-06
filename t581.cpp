#include <iostream>
#include <vector>

//581. Shortest Unsorted Continuous Subarray
//Given an integer array, you need to find one continuous subarray that if you only sort this subarray in ascending order, then the whole array will be sorted in ascending order, too.
//You need to find the shortest such subarray and output its length.

unsigned findUnsortedSubarray(const std::vector<int>& nums)
{
    unsigned startIndex = 0;
    for(unsigned i = 1; i < nums.size(); ++i)
    {
        if(nums[i] <= nums[i-1])
        {
            startIndex = i - 1; 
            break;
        }
    }
    unsigned count = 0;
    for(unsigned i = startIndex + 1; i < nums.size(); ++i)
        if(nums[i-1] > nums[i] || nums[i] > nums[i-1])
            ++count;
    return count;
}

int main()
{
    std::cout << findUnsortedSubarray({2, 6, 4, 8, 10, 9, 15}) << std::endl;
}
