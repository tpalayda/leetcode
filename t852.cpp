#include <iostream>
#include <vector>

unsigned peakIndexInMountainArray(const std::vector<int>& A)
{
    const size_t n = A.size();
    for(unsigned i = 1; i < n; ++i)
        if(A[i-1] < A[i] && A[i] > A[i+1])
            return i;
}
int main()
{
    std::vector<int> v = {0,2,1,0};
    std::cout << peakIndexInMountainArray(v) << std::endl;
}
