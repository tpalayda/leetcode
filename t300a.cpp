#include <iostream>
#include <vector>
#include <iterator>

int lengthOfLIS(const std::vector<int>& nums)
{
    std::vector<std::vector<int>> result(nums.size(), std::vector<int>());
    result[0].emplace_back(nums[0]);
    for(int i = 1; i < nums.size(); ++i)
    {
        for(int j = 0; j < i; ++j)
        {
            if(nums[j] < nums[i] && result[j].size() > result[i].size())
                result[i] = result[j];
        }
        result[i].emplace_back(nums[i]);
    }

    int max = 0;
    for(const auto& vec : result)
    {
        std::copy(vec.begin(), vec.end(), std::ostream_iterator<int>(std::cout, " "));
        std::cout << std::endl;
        if(vec.size() > max)
            max = vec.size();
    }
    return max;
}

int main()
{
    std::cout << lengthOfLIS({10, 9, 2, 5, 3, 7, 101, 18}) << std::endl;
    //std::cout << lengthOfLIS({0, 8, 4, 12, 2, 10, 6, 14, 1, 9, 5, 13, 3, 11, 7, 15 }) << std::endl;
}
