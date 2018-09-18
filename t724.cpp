#include <iostream>
#include <vector>

int pivotIndex(const std::vector<int>& nums)
{
    int sum = 0;
    for(const int& num : nums)
        sum += num;
    int left_sum = 0;
    for(unsigned i = 0; i < nums.size(); ++i)
    {
        if(left_sum == sum - left_sum - nums[i])
            return i;
        left_sum += nums[i];
    }
    return -1;
}

int main()
{
    std::cout << pivotIndex({1, 7, 3, 6, 5, 6}) << std::endl;
    std::cout << pivotIndex({1, 2, 3}) << std::endl;
}
