#include <iostream>
#include <vector>
#include <iterator>

void swap(std::vector<int>& nums, int from, unsigned to)
{
    while(from < to)
        std::swap(nums[from++], nums[to--]);    
}
void rotate(std::vector<int>& nums, int k)
{
    const size_t size = nums.size();
    k %= size;
    
    swap(nums, 0, size - 1);
    swap(nums, 0, k - 1);
    swap(nums, k, size - 1);
}
int main()
{
    std::vector<int> nums = {1,2,3,4,5,6,7};
    rotate(nums,3);
    std::copy(nums.begin(), nums.end(), std::ostream_iterator<int>(std::cout, " "));
    std::cout << std::endl;
}
