#include <iostream>
#include <vector>
#include <unordered_map>

// 697. Degree of an Array
// Given a non-empty array of non-negative integers nums, the degree of this array is defined as the maximum frequency of any one of its elements.
// Your task is to find the smallest possible length of a (contiguous) subarray of nums, that has the same degree as nums.

int findShortestSubArray(const std::vector<int>& nums)
{
    int shortestSize = nums.size();
    std::unordered_map<int, std::vector<int>> map;
    for(unsigned i = 0; i < shortestSize; ++i)
        map[nums[i]].emplace_back(i);
    int degree = 0;
    for(const auto& it : map)
        degree = std::max(degree, static_cast<int>(it.second.size()));
    for(const auto& it : map)
        if(it.second.size() == degree)
            shortestSize = std::min(shortestSize, it.second.back() - it.second[0] + 1);
    return shortestSize;
}

int main()
{
    std::cout << findShortestSubArray({1,2,2,3,1,4,2}) << std::endl; //6
    std::cout << findShortestSubArray({1,2,2,3,1}) << std::endl; //2
}
