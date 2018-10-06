#include <iostream>
#include <algorithm>
#include <vector>

// 153. Find Minimum in Rotated Sorted Array

int findMin(const std::vector<int>& nums)
{
    return *std::min_element(nums.begin(), nums.end());
}

int main()
{
    std::cout << findMin({3, 4, 5, 1, 2}) << std::endl;
    std::cout << findMin({4, 5, 6, 7, 0, 1, 2}) << std::endl;
}
