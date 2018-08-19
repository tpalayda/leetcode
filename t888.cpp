#include <iostream>
#include <vector>

//Fair Candy Swap
std::vector<int> fairCandySwap(const std::vector<int>& A, const std::vector<int>& B)
{
    return {1,2};
}

int main()
{
    std::vector<int> v1 = {1,1};
    std::vector<int> v2 = {2,2};
    for(const int& el : fairCandySwap(v1,v2))
        std::cout << el << " ";
    std::cout << std::endl;
}

