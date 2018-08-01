#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>

unsigned removeDuplicates(std::vector<int>& nums)
{
    for(auto it = nums.begin(); it != nums.end(); ++it)
        if((it+1) != nums.end() && *it == *(it+1))
        {
            it = nums.erase(it);
            if((it+1) != nums.end() && *it == *(it+1))
                it = nums.erase(it);
        }
    return nums.size();
}
int main()
{
    std::vector<int> nums = {};
    std::cout << removeDuplicates(nums) << std::endl;
}
