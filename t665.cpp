#include <iostream>
#include <vector>

// 665. Non-decreasing Array

/*
Given an array with n integers, your task is to check if it could become non-decreasing by modifying at most 1 element.

We define an array is non-decreasing if array[i] <= array[i + 1] holds for every i (1 <= i < n).
*/

int checkPossibility(const std::vector<int>& nums)
{
    int numOfSorted = nums[1] > nums[0];
    for(unsigned i = 2; i < nums.size(); ++i)
        if(nums[i] >= nums[i-1] && i+1 < nums.size() && nums[i+1] >= nums[i]) 
            ++numOfSorted;
    numOfSorted += nums[nums.size()-1] > nums[nums.size()-2];
    return numOfSorted;
}

int main()
{
    std::cout << checkPossibility({4, 2, 3}) << std::endl; //1
    std::cout << checkPossibility({4, 2, 1}) << std::endl; //0
    std::cout << checkPossibility({-1, 4, 2, 3}) << std::endl; //1
    std::cout << checkPossibility({3, 4, 2, 3}) << std::endl; //0
}
