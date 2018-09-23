#include <iostream>
#include <cmath>

//Given a non-negative integer c, your task is to decide whether there're two integers a and b such that a^2 + b^2 = c.
constexpr bool judgeSquareSum(const int& c)
{
    for(unsigned i = 0; i <= sqrt(c); ++i)
    {
        int a = sqrt(c - i*i);
        if(a*a == c - i*i)
            return true;
    }
    return false;
}

int main()
{
    std::cout << judgeSquareSum(5) << std::endl;    
    std::cout << judgeSquareSum(3) << std::endl;
}
