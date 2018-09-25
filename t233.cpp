#include <iostream>

// 233. Number of Digit One
// Given an integer n, count the total number of digit 1 appearing in all non-negative integers less than or equal to n.

constexpr unsigned countDigitOne(const int& n)
{
    unsigned counter = 0;
    for(long long i = 1; i <= n; i *= 10)
        counter += (n/i + 8) / 10 * i + (n/i % 10 == 1) * (n%i + 1);
    return counter;
}

int main()
{
    std::cout << countDigitOne(13) << std::endl;
    std::cout << countDigitOne(-1) << std::endl;
    std::cout << countDigitOne(824883294) << std::endl;
}
