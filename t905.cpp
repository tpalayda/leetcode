#include <iostream>
#include <vector>
#include <iterator>

std::vector<int> sortArrayByParity(const std::vector<int>& A)
{
    std::vector<int> result;
    for(const int& el : A)
        if(!(el & 1))
            result.emplace_back(el);
    for(const int& el : A)
        if(el & 1)
            result.emplace_back(el);
    return result;
}

int main()
{
    std::vector<int> result = sortArrayByParity({3,1,2,4});
    std::copy(result.begin(), result.end(), std::ostream_iterator<int>(std::cout, " "));
}
