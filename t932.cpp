#include <iostream>
#include <vector>
#include <iterator>

//932. Beautiful Array
/*
For some fixed N, an array A is beautiful if it is a permutation of the integers 1, 2, ..., N, such that:

For every i < j, there is no k with i < k < j such that A[k] * 2 = A[i] + A[j].

Given N, return any beautiful array A.  (It is guaranteed that one exists.)
*/
std::vector<int> beautifulArray(const int& N)
{
    std::vector<int> result(N,0);
    unsigned i = 0, k = i + 1, j = k + 1;

    return result;
}

int main()
{
    //Example 1:
    std::vector<int> result = beautifulArray(4);
    std::copy(result.begin(), result.end(), std::ostream_iterator<int>(std::cout, " "));
    //Output: [2,1,4,3]

    //Example 2:
    std::vector<int> result1 = beautifulArray(5);
    std::copy(result1.begin(), result1.end(), std::ostream_iterator<int>(std::cout, " "));
    //Output: [3,1,2,5,4]
}
