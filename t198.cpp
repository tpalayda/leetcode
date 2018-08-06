#include <iostream>
#include <vector>

size_t HouseRobber(const std::vector<int>& nums)
{
    size_t robEven = 0, robOdd = 0;

    for(unsigned i = 0; i < nums.size(); ++i)
        if(i & 1)
            robOdd = std::max(robOdd+nums[i],robEven);
        else
            robEven = std::max(robEven+nums[i],robOdd);
    return std::max(robOdd,robEven);
}

int main()
{
    std::vector<int> nums = {2,1,1,2};
    std::vector<int> nums2 = {1,3,1,3,100};
    std::cout << HouseRobber(nums) << std::endl;
    std::cout << HouseRobber(nums2) << std::endl;
}
