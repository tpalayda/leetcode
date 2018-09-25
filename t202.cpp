#include <iostream>

// 202. Happy Number
// A happy number is a number defined by the following process: Starting with any positive integer, replace the number by the sum of the squares of its digits, and repeat the process until the number equals 1 (where it will stay), or it loops endlessly in a cycle which does not include 1. Those numbers for which this process ends in 1 are happy numbers.

constexpr bool isHappy(int n) //stack will overflow
{
    if(n == 1)
        return true;
    int digit = n % 10;
    int sumOfDigits = 0;
    while(n)
    {
        sumOfDigits += digit*digit;
        n /= 10;
        digit = n % 10;
    }
    return isHappy(sumOfDigits);
}

int main()
{
    std::cout << isHappy(2) << std::endl;
}
