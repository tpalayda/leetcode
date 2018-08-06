#include <iostream>
#include <vector>

size_t HouseRobber(const std::vector<int>& nums)
{
    size_t robEven = 0, robOdd = 0;
    for(unsigned i = 0; i < nums.size(); ++i)
        if(i & 1)
            robOdd += nums[i];
        else
            robEven += nums[i];
    return robEven > robOdd ? robEven : robOdd;
}

int main()
{
    std::vector<int> nums = {2,1,1,2};
    std::cout << HouseRobber(nums) << std::endl;
}
