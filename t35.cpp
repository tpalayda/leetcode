#include <iostream>
#include <vector>

unsigned searchInsert(const std::vector<int>& nums, const int& target)
{
    if(target < nums[0])
        return 0;
    unsigned l = 0, r = nums.size()-1;
    if(target > nums[r])
        return r+1;
    while(l < r)
    {
        unsigned m = (l+r)/2;
        if(nums[m] < target)
            l = m + 1;
        else
            r = m;
    }
    return l;
}
int main()
{
    const std::vector<int> v1 = {1,3,5,6};
    const std::vector<int> v2 = {1,3};
    std::cout << searchInsert(v2,1) << std::endl;
}
