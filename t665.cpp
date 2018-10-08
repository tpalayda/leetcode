#include <iostream>
#include <vector>

// 665. Non-decreasing Array

/*
Given an array with n integers, your task is to check if it could become non-decreasing by modifying at most 1 element.

We define an array is non-decreasing if array[i] <= array[i + 1] holds for every i (1 <= i < n).
*/

bool checkPossibility(const std::vector<int>& nums)
{
    size_t counter = 0;
    for(auto it = nums.begin() + 1; it != nums.end(); ++it)
        if(*it >= *(it-1))
            ++counter;
    return counter == 1;
}

int main()
{
    std::cout << checkPossibility({4, 2, 3}) << std::endl; //1
    std::cout << checkPossibility({4, 2, 1}) << std::endl; //0
}
