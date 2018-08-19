#include <iostream>
#include <numeric>
#include <vector>

//Fair Candy Swap
std::vector<int> fairCandySwap(const std::vector<int>& A, const std::vector<int>& B)
{
    int balans = std::accumulate(B.begin(), B.end(), 0);
    balans = std::accumulate(A.begin(), A.end(), balans, std::minus<int>());
    balans /= 2;

    for(const int& el : A)
        for(const int& el2 : B)
            if(el2 - el == balans)
                return {el,el2};
    return {};
}

int main()
{
    std::vector<int> v1 = {1,1};
    std::vector<int> v2 = {2,2};
    for(const int& el : fairCandySwap(v1,v2))
        std::cout << el << " ";
    std::cout << std::endl;
}

