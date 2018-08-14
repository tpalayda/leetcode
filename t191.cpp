#include <iostream>

constexpr unsigned hammingWeight(uint32_t n)
{
    unsigned count = n & 1;
    while(n >>= 1)
        count += n & 1;
    return count;
}
int main()
{
    std::cout << hammingWeight(11) << std::endl;
}
