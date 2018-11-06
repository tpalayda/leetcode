#include <iostream>
#include <vector>


//930. Binary Subarrays With Sum
//In an array A of 0s and 1s, how many non-empty subarrays have sum S?
/*
Example 1:
    Input: A = [1,0,1,0,1], S = 2
    Output: 4
    Explanation: 
        The 4 subarrays are bolded below:
            [1,0,1,0,1]
            [1,0,1,0,1]
            [1,0,1,0,1]
            [1,0,1,0,1]
*/

int numSubArraysWithSum(const std::vector<int>& A, const int& S)
{
    return 0;
}

int main()
{
    std::cout << numSubArraysWithSum({1, 0, 1, 0, 1}, 2) << std::endl;
}
