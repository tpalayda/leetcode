#include <iostream>

// 292. Nim Game

constexpr bool canWinNim(const int& n)
{
    return n % 4;
}

int main()
{
    std::cout << canWinNim(4) << std::endl;
    std::cout << canWinNim(5) << std::endl;
}
