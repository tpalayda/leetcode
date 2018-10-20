#include <iostream>
#include <vector>

// 55. Jump Game
/*
Given an array of non-negative integers, you are initially positioned at the first index of the array.

Each element in the array represents your maximum jump length at that position.

Determine if you are able to reach the last index.
*/
inline bool canJump(const std::vector<int>& nums)
{
    int jump = 0;
    for(int i = 0; i < nums.size() - 1 && i <= jump; ++i)
        jump = std::max(i + nums[i], jump);
    return jump >= nums.size() - 1;
}

int main()
{
    std::cout << canJump({2, 3, 1, 1, 4}) << std::endl;
    std::cout << canJump({3, 2, 1, 0, 4}) << std::endl;
}
