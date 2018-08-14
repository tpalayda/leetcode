#include <iostream>
#include <vector>
#include <unordered_map>

bool containsDuplicate(const std::vector<int>& nums)
{
    std::unordered_map<int,int> occurrences;
    for(const int& num : nums)
        ++occurrences[num];
    for(const auto& it : occurrences)
        if(it.second > 1)
            return true;
    return false;
}

int main()
{
    std::cout << containsDuplicate({}) << std::endl;    
}
