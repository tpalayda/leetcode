#include <iostream>

constexpr int divide(int dividend, int divisor)
{
    int sign = -1;
    if((dividend > 0 && divisor > 0) || (dividend < 0 && divisor < 0))
        sign = 1;
    if(dividend < 0)
        dividend = dividend * -1;
    if(divisor < 0)
        divisor = divisor * -1;
    int result = 0;
    while(dividend >= divisor)
    {
        dividend -= divisor;
        ++result;
    }
    return sign == 1 ? result : -result;
}
int main()
{
    std::cout << divide(10,10) << std::endl;
}
