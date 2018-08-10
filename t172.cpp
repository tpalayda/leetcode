#include <iostream>

constexpr unsigned trailingZeroes(const int& n)
{
    return !n ? 0 : n/5 + trailingZeroes(n/5);
}
int main()
{
    std::cout << trailingZeroes(5) << std::endl;
}
