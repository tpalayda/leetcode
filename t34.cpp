#include <iostream>
#include <vector>
#include <iterator>

/*
Given an array of integers nums sorted in ascending order, find the starting and ending position of a given target value.

Your algorithm's runtime complexity must be in the order of O(log n).

If the target is not found in the array, return [-1, -1].

34. Find First and Last Position of Element in Sorted Array */
std::vector<int> searchRange(const std::vector<int>& nums, const int& target)
{
    const size_t N = nums.size();
    int l = 0;
    int r = N - 1;
    while(l <= r)
    {
        int m = (l + r) / 2;
        if(nums[m] == target)
        {
            int i = m, j = m;
            while(j - 1 >= 0 && nums[j-1] == target)
                --j;
            while(i + 1 < N && nums[i+1] == target) 
                ++i;
            return {j, i};
        }
        else if(nums[m] > target)
            r = m - 1;
        else
            l = m + 1;
    }
    return {-1, -1};
}

int main()
{
    std::vector<int> result1 = searchRange({5, 7, 7, 8, 8, 10}, 8);
    std::vector<int> result2 = searchRange({5, 7, 7, 8, 8, 10}, 6);
    std::vector<int> result3 = searchRange({1}, 1);

    std::copy(result1.begin(), result1.end(), std::ostream_iterator<int>(std::cout, " "));    
    std::cout << std::endl;
    std::copy(result2.begin(), result2.end(), std::ostream_iterator<int>(std::cout, " "));    
    std::cout << std::endl;
    std::copy(result3.begin(), result3.end(), std::ostream_iterator<int>(std::cout, " "));    
}
