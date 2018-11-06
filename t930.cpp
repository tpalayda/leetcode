#include <iostream>
#include <vector>
#include <type_traits>
#include <iterator>
#include <algorithm>

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

template<typename T>
void printArray(const T& vector)
{
    static_assert(std::is_same<T, std::vector<int>>::value, "You need to use vector of integers");
    std::copy(vector.begin(), vector.end(), std::ostream_iterator<int>(std::cout, " "));
    std::cout << std::endl;
}
int numSubArraysWithSum(const std::vector<int>& A, const int& S, const int& size, const int& begin = 0)
{
    if(begin >= size)
        return 0;
    printArray(A);
    std::vector<int> temp(A.begin() + begin, A.end());
    numSubArraysWithSum(temp, S, temp.size(), begin + 1);
}

int main()
{
    std::cout << numSubArraysWithSum({1, 0, 1, 0, 1}, 2, 5) << std::endl;
}
