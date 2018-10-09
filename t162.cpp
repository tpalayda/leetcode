#include <iostream>
#include <vector>

// 162. Find Peak Element
//Given an input array nums, where nums[i] ≠ nums[i+1], find a peak element and return its index.


int findPeakElement(const std::vector<int>& nums)
{
    int l = 0;
    int r = nums.size() - 1;
    while(l < r)
    {
        int m = (l + r)/2;
        if(nums[m] > nums[m+1])
            r = m;
        else
            l = m + 1;
    }
    return l;
}

int main()
{
    std::cout << findPeakElement({1, 2, 3, 1}) << std::endl; 
    std::cout << findPeakElement({1, 2, 1, 3, 5, 6, 4}) << std::endl; 
}
