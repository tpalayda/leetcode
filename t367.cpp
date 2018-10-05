#include <iostream>

// 367. Valid Perfect Square
// Given a positive integer num, write a function which returns True if num is a perfect square else False.

constexpr bool isPerfectSquare(const int& num)
{
    int result = 0;
    for(unsigned i = 1; i*i <= num; ++i)
        result = i*i;
    return result == num;
}

int main()
{
    std::cout << isPerfectSquare(16) << std::endl;
    std::cout << isPerfectSquare(1) << std::endl;
    std::cout << isPerfectSquare(14) << std::endl;
}
