#include <iostream>
#include <vector>

int majorityElement(const std::vector<int>& nums)
{
    int el = nums[0];
    unsigned count = 1;
    for(auto it = nums.begin()+1; it != nums.end(); ++it)
        if(!count)
        {
            el = *it;
            ++count;
        }
        else if(el == *it)
            ++count;
        else
            --count;
    return el;
}
int main()
{
    const std::vector<int> nums = {6,5,5};
    std::cout << majorityElement(nums) << std::endl;
}
