#include <iostream>

// 233. Number of Digit One
// Given an integer n, count the total number of digit 1 appearing in all non-negative integers less than or equal to n.

constexpr unsigned doesContainOne(int num)
{
    int digit = num % 10;
    unsigned counter = 0;
    while(num)
    {
        if(digit == 1)
            ++counter;
        num /= 10;
        digit = num % 10;
    }
    return counter;
}

constexpr unsigned countDigitOne(const int& n)
{
    if(n <= 0)
        return 0;
    unsigned counter = 0;
    for(unsigned i = 1; i <= n; ++i)
        counter += doesContainOne(i);
    return counter;
}

int main()
{
    std::cout << countDigitOne(13) << std::endl;
    std::cout << countDigitOne(-1) << std::endl;
}
