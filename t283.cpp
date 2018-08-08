#include <iostream>
#include <vector>
#include <iterator>

void moveZeroes(std::vector<int>& nums)
{
    const size_t n = nums.size();
    unsigned j = 0;
    for(unsigned i = 0; i < n; ++i)
        if(nums[i])
            nums[j++] = nums[i];
    while(j < n)
        nums[j++] = 0;
}
int main()
{
    std::vector<int> nums = {0,1,0,3,12};
    moveZeroes(nums);
    std::copy(nums.begin(),nums.end(),std::ostream_iterator<int>(std::cout," "));
    std::cout << "\n";
}
