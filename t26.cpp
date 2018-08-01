#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>

unsigned removeDuplicates(std::vector<int>& nums)
{
    for(auto it = nums.begin(); it != nums.end();)
        if(it+1 != nums.end() && *it == *(it+1))
            it = nums.erase(it);
        else
            ++it;
    return nums.size();
}
int main()
{
    std::vector<int> nums = {0,0,1,1,1,2,2,3,3,4};
    std::cout << removeDuplicates(nums) << std::endl;
}
