#include <iostream>

constexpr unsigned arrangeCoins(const unsigned& n)
{
    unsigned sum = 0;
    unsigned counter = 0;
    for(unsigned k = 1;; ++k)
    {
        sum += k;
        ++counter;
        if(sum > n)
            return counter - 1;
    }
    return sum;
}

int main()
{
    std::cout << arrangeCoins(5) << std::endl; //2
    std::cout << arrangeCoins(8) << std::endl; //3
    std::cout << arrangeCoins(1) << std::endl; //3
}
