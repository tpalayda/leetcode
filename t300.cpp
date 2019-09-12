#include <iostream>
#include <vector>
#include <iterator>

int lengthOfLIS(const std::vector<int>& nums)
{
    std::vector<int> result(nums.size(), 0);
    result[0] = 1;
    for(int i = 1; i < nums.size(); ++i)
    {
        for(int j = 0; j < i; ++j)
        {
            if(nums[j] < nums[i] && result[j] > result[i])
                result[i] = result[j];
        }
        ++result[i];
    }
    std::copy(result.begin(), result.end(), std::ostream_iterator<int>(std::cout, " "));
    return result.size();
}

int main()
{
    std::cout << lengthOfLIS({10, 9, 2, 5, 3, 7, 101, 18}) << std::endl;
    std::cout << lengthOfLIS({0, 8, 4, 12, 2, 10, 6, 14, 1, 9, 5, 13, 3, 11, 7, 15 }) << std::endl;
}
