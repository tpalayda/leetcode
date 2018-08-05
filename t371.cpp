#include <iostream>

//Sum of Two Integers
constexpr int getSum(const int& a, const int& b)
{
    return !b ? a : getSum(a ^ b, (a & b) << 1);
}
int main()
{
    std::cout << getSum(4,5) << std::endl;
}
