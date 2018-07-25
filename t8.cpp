#include <iostream>
#include <string>
#include <limits>

constexpr bool isNumeric(const char& c)
{
    return c >= '0' && c <= '9' ? 1 : 0;
}
int myAtoi(const std::string& str)
{
    if(!isNumeric(str[0]) && str[0] != '-' && str[0] != ' ')
        return 0;
    int result = 0;
    int min_val = std::numeric_limits<int>::min()/10;
    int max_val = std::numeric_limits<int>::max()/10;
    bool isNegative = false;
    for(auto it = str.begin(); it != str.end(); ++it)
    {
        if(*it == '-' && isNumeric(*(it+1)))
        {
            isNegative = !isNegative;
            continue;
        }
        else
            break;
        if(isNumeric(*it))
            if(!isNegative && result > max_val)
                return max_val*10+7;
            else if(isNegative && result*-1 < min_val)
                return min_val*10-8;
            else
                result = result*10 + *it - 48;
    }
    result = isNegative ? result*-1 : result;
    return result;
}
int main()
{
    std::string a = "123-------";
    std::cout << myAtoi(a) << std::endl;
}
