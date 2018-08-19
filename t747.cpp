#include <iostream>
#include <algorithm>
#include <vector>

//Largest Number At Least Twice of Others
int dominantIndex(const std::vector<int>& nums)
{
    int largest_element = *std::max_element(nums.begin(), nums.end());
    const size_t n = nums.size();

    for(unsigned i = 0; i < n; ++i)
        if(nums[i] != largest_element && largest_element < nums[i]*2)
            return -1;
    for(unsigned i = 0; i < n; ++i)
        if(nums[i] == largest_element)
            return i;
}

int main()
{
    std::cout << dominantIndex({1,2,3,4}) << '\n';
    std::cout << dominantIndex({3,6,1,0}) << '\n';
}

