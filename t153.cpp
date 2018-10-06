#include <iostream>
#include <algorithm>
#include <vector>

// 153. Find Minimum in Rotated Sorted Array

int findMin(const std::vector<int>& nums)
{
    unsigned l = 0;
    unsigned r = nums.size() - 1;
    while(l < r)
    {
        if(nums[l] < nums[r])
            return nums[l];

        unsigned m = (l + r) / 2;

        if(nums[m] >= nums[l]) // [2,1]
            l = m + 1;
        else
            r = m;
    }
    return nums[l];
}

int main()
{
    std::cout << findMin({3, 4, 5, 1, 2}) << std::endl;
    std::cout << findMin({4, 5, 6, 7, 0, 1, 2}) << std::endl;
}
