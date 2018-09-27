#include <iostream>
#include <cmath>

constexpr unsigned arrangeCoins(const unsigned& n)
{
    return sqrt(2 * static_cast<double>(n) + 0.25) - 0.5;
}

int main()
{
    std::cout << arrangeCoins(5) << std::endl; //2
    std::cout << arrangeCoins(8) << std::endl; //3
    std::cout << arrangeCoins(1) << std::endl; //1
}
