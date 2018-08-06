#include <iostream>
#include <vector>

std::vector<int> plusOne(const std::vector<int>& digits)
{
    return {};
}
int main()
{
    std::vector<int> digits = {1,2,3};
    for(const int& el : plusOne(digits))
        std::cout << el;
    std::cout << "\n";
}
