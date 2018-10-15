#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>
/*
922. Sort Array By Parity II
Given an array A of non-negative integers, half of the integers in A are odd, and half of the integers are even.
Sort the array so that whenever A[i] is odd, i is odd; and whenever A[i] is even, i is even.
You may return any answer array that satisfies this condition.
*/
template<typename T>
constexpr bool isOdd(const T& val)
{
    return val & 1;    
}

std::vector<int> sortArrayByParityII(const std::vector<int>& A)
{
    std::vector<int> result(A.size(), 0);
    
    int l = 0;
    int r = 1;
    
    for(const int& num : A)
        if(isOdd(num))
        {
            result[r] = num;
            r += 2;
        }
        else
        {
            result[l] = num;
            l += 2;
        }
    return result;
}

int main()
{
    std::vector<int> result = sortArrayByParityII({4, 2, 5, 7});
    //Output: [4,5,2,7]
    //Explanation: [4,7,2,5], [2,5,4,7], [2,7,4,5] would also have been accepted.
    std::copy(result.begin(), result.end(), std::ostream_iterator<int>(std::cout, " "));
}
