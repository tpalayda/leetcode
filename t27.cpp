#include <iostream>
#include <vector>

inline size_t removeElement(std::vector<int>& nums, const int& val)
{
    for(auto it = nums.begin(); it != nums.end();)
        it = *it == val ? nums.erase(it) : it+1;
    return nums.size();
}

int main()
{
    std::vector<int> nums = {3,2,2,3};
    std::vector<int> nums2 = {0,1,2,2,3,0,4,2};
    std::cout << removeElement(nums,3) << std::endl;
    std::cout << removeElement(nums2,2) << std::endl;
}
