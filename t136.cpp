#include <iostream>
#include <vector>

int singleNumber(const std::vector<int>& nums)
{
    int result = 0;
    for(const int& num : nums)
        result ^= num;
    return result;
}
int main()
{
    const std::vector<int> v = {1,2,3,4,5,6,6};
    std::cout << singleNumber(v) << std::endl;
}
