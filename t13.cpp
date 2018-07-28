#include <iostream>
#include <string>

int romanToInt(const std::string& s)
{
    int result {};
    for(auto it = s.begin(); it != s.end(); ++it)
    {
        if(*it == 'I' && (*(it+1) == 'X' || *(it+1) == 'V'))
            result -= 1;
        else if(*it == 'I')
            result += 1;
        else if(*it == 'V')
            result += 5;
        else if(*it == 'X' && (*(it+1) == 'L' || *(it+1) == 'C'))
            result -= 10;
        else if(*it == 'X')
            result += 10;
        else if(*it == 'L')
            result += 50;
        else if(*it == 'C' && (*(it+1) == 'D' || *(it+1) == 'M'))
            result -= 100;
        else if(*it == 'C')
            result += 100;
        else if(*it == 'D')
            result += 500;
        else if(*it == 'M')
            result += 1000;
    }
    return result;
}
int main()
{
    std::cout << romanToInt("IX") << std::endl;
    std::cout << romanToInt("IV") << std::endl;
    std::cout << romanToInt("III") << std::endl;
    std::cout << romanToInt("MCMXCIV") << std::endl;
}
