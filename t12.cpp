#include <iostream>

const char RomanSymbol(const unsigned& num)
{
    switch(num)
    {
        case 1:
        case 2:
        case 3:
        case 4:
        case 6:
        case 7:
        case 8:
        case 9:
            return 'I';
            break;
        case 5:
            return 'V';
            break;
        case 10:
            return 'X';
            break;
        case 50:
            return 'L';
            break;
        case 100:
            return 'C';
            break;
        case 500:
            return 'D';
            break;
        case 1000:
            return 'M';
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
    unsigned numb = 0;
    std::cout << "exp:" << exp << std::endl;
    for(unsigned i = exp; i; i /= 10)
    {
        numb = (num/i%10)*i;
        result += RomanSymbol(numb);
    }
    return result;
}

int main()
{
    std::cout << intToRoman(231) << std::endl;
}
