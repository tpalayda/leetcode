#include <iostream>
#include <vector>
#include <unordered_map>

bool containsDuplicate(const std::vector<int>& nums)
{
    std::unordered_map<int,int> occurrences;
    for(const int& num : nums)
        if(++occurrences[num] > 1)
            return true;
    return false;
}

int main()
{
    std::cout << containsDuplicate({}) << std::endl;    
}
