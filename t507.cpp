#include <iostream>

// 507. Perfect Number
// We define the Perfect Number is a positive integer that is equal to the sum of all its positive divisors except itself.
// Now, given an integer n, write a function that returns true when it is a perfect number and false when it is not.

constexpr bool checkPerfectNumber(int num)
{
    if(num <= 0)
        return false;
    int sum = 0;
    for(unsigned i = 1; i*i < num; ++i)
        if(!(num % i))
        {
            sum += i;
            sum += num / i;
        }
    return sum - num == num;
}

int main()
{
    std::cout << checkPerfectNumber(28) << std::endl;
}
