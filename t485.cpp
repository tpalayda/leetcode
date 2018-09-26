#include <iostream>
#include <vector>

// 485. Max Consecutive Ones
/*
Input: [1,1,0,1,1,1]
Output: 3
Explanation: The first two digits or the last three digits are consecutive 1s.
    The maximum number of consecutive 1s is 3.
*/
unsigned findMaxConsecutiveOnes(const std::vector<int>& nums)
{
    unsigned result = 0;
    unsigned temp = 0;
    for(const int& num : nums)
    {
        if(num == 0)
        {
            result = std::max(result, temp);
            temp = 0;
        }
        else
            temp += num;
    }
    result = std::max(result, temp);

    return result;
}

int main()
{
    std::cout << findMaxConsecutiveOnes({1,1,0,1,1,1}) << std::endl;
}
