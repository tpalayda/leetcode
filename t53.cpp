#include <iostream>
#include <vector>

int maxSubArray(const std::vector<int>& nums)
{
    const size_t n = nums.size();
    int largest_sum = nums[n/2];
    int temp_sum = 0;
    for(unsigned i = 0; i < n; ++i)
    {
        temp_sum += nums[i]; 
        if(temp_sum > largest_sum)
            largest_sum = temp_sum;
        if(temp_sum < 0)
            temp_sum = 0;
    }
    return largest_sum;
}

int main()
{
    std::vector<int> nums = {-2,0,-3,-3};
    std::cout << maxSubArray(nums) << std::endl;
}
