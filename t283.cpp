#include <iostream>
#include <vector>
#include <iterator>

void moveZeroes(std::vector<int>& nums)
{
    const size_t n = nums.size();
    for(unsigned i = 0, j = n-1; i < j; ++i)
        if(!nums[i] && nums[j])
            std::swap(nums[i],nums[j--]);
}
int main()
{
    std::vector<int> nums = {0,1,0,3,12};
    moveZeroes(nums);
    std::copy(nums.begin(),nums.end(),std::ostream_iterator<int>(std::cout," "));
    std::cout << "\n";
}
