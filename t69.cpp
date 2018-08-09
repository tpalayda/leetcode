#include <iostream>

constexpr int mySqrt(const int& x)
{
    int result = x;
    while(result*result > x)
        result = (result*result+x)/(2*result);
    return result;
}
int main()
{
    std::cout << mySqrt(8) << std::endl;
}
