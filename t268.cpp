#include <iostream>
#include <vector>

//1...n
unsigned missingNumber(std::vector<int> nums)
{
    const size_t n = nums.size();
    unsigned expected_sum = n*(n+1)/2;;
    unsigned calculated_sum = 0;
    for(const auto& el : nums)
        calculated_sum += el;
    return expected_sum - calculated_sum;
}
int main()
{
    std::vector<int> nums = {0,1,7,5,3,2,4,6,9};
    std::cout << missingNumber(nums) << std::endl;
}
