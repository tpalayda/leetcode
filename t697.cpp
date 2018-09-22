#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>

// 697. Degree of an Array
// Given a non-empty array of non-negative integers nums, the degree of this array is defined as the maximum frequency of any one of its elements.
// Your task is to find the smallest possible length of a (contiguous) subarray of nums, that has the same degree as nums.

unsigned findShortestSubArray(const std::vector<int>& nums)
{
    std::unordered_map<int, unsigned> occurrences;
    std::unordered_set<int> duplicates;

    std::pair<int, unsigned> number;
    for(const int& num : nums)
        ++occurrences[num];
    for(const auto& it : occurrences)
        if(number.second < it.second)
            number = it;

    duplicates.emplace(number.first);

    for(const auto& it : occurrences)
        if(number.second == it.second && number.first != it.first)
            duplicates.emplace(it.first);

    if(duplicates.size() < 2)
    {
        int i = 0, j = nums.size() - 1;
        while(i > j)
            if(nums[i] != number.first)
                ++i;
            if(nums[j] != number.first)
                --j;
            else
                return i + j;
    }
    else
    {
        int i = 0, j = nums.size() - 1;
        while(i > j)
            if(nums[i] != number.first)
                ++i;
            if(nums[j] != number.first)
                --j;
            else
                return i + j;
    }
    //std::cout << number.first << ',' << number.second << ',' << isUnique << std::endl;
}

int main()
{
    std::cout << findShortestSubArray({1,2,2,3,1,4,2}) << std::endl; //6
    std::cout << findShortestSubArray({1,2,2,3,1}) << std::endl; //2
}
