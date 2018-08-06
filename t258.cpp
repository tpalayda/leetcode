#include <iostream>

//Add Digits
constexpr unsigned addDigits(const unsigned& num)
{
    return !(num % 9) && num ? 9 :num % 9;
}
int main()
{
    std::cout << addDigits(0) << std::endl;
}
