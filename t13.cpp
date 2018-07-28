#include <iostream>
#include <string>

int romanToInt(const std::string& s)
{
    int result {};
    for(auto it = s.begin(); it != s.end(); ++it)
    {
        switch(*it)
        {
            case 'I':
                result = (*(it+1) == 'X' || *(it+1) == 'V') ? result-1 : result+1;
                break;
            case 'V':
                result += 5;
                break;
            case 'X':
                result = (*(it+1) == 'L' || *(it+1) == 'C') ? result-10 : result+10;
                break;
            case 'L':
                result += 50;
                break;
            case 'C':
                result = (*(it+1) == 'D' || *(it+1) == 'M') ? result-100 : result+100;
                break;
            case 'D':
                result += 500;
                break;
            case 'M':
                result += 1000;
                break;
            default:
                break;
        }
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
