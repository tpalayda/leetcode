#include <iostream>

// 201. Bitwise AND of Numbers Range
int rangeBitwiseAnd(const int& m, const int& n)
{
    int result = m;
    for(unsigned i = m + 1; i <= n; ++i)
        result &= i;
    return result;
}

int main()
{
    std::cout << rangeBitwiseAnd(5,7) << std::endl;
    std::cout << rangeBitwiseAnd(0,1) << std::endl;
    std::cout << rangeBitwiseAnd(1,2) << std::endl;
}
