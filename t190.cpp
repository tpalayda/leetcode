#include <iostream>

//Reverse Bits
uint32_t reverseBits(uint32_t n)
{
    uint32_t result = 0;
    for(unsigned i = 0; i < 32; ++i)
        result = (result << 1) + (n >> i & 1);
    return result;
}
int main()
{
    std::cout << reverseBits(43261596) << std::endl;
}
