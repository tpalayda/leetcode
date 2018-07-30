#include <iostream>

const char RomanSymbol(const unsigned& num)
{
    switch(num)
    {
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
            break;
        default:
            break;
    }
}
std::string intToRoman(const unsigned& num)
{
    unsigned exp = 1;
    std::string result;
    while(exp*10 <= num)
        exp *= 10;
    for(unsigned i = exp; i; i /= 10)
    {
        std::cout << num/i%10 << std::endl;
    }
    return result;
}

int main()
{
    std::cout << intToRoman(231) << std::endl;
}
