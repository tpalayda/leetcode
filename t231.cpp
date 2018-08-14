#include <iostream>

constexpr bool isPowerOfTwo(const int& n)
{
    return n > 0 && !(n & (n-1));
}
int main()
{
    std::cout << isPowerOfTwo(-2147483648) << std::endl;
}
