#include <iostream>
#include <string>
#include <limits>

constexpr bool isNumeric(const char& c)
{
    return c >= '0' && c <= '9' ? 1 : 0;
}
int myAtoi(const std::string& str)
{
    if(!isNumeric(str[0]) && str[0] != '-' && str[0] != ' ' && str[0] != '+')
        return 0;
    if(str.size() > 1 && !isNumeric(str[1]) && str[1] != ' ' && str[1] != '.')
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
        if(isNumeric(*it))
            if(!isNegative && result > max_val)
                return max_val*10;
            else if(isNegative && result*-1 < min_val)
                return min_val*10;
            else
            {
                result = result*10 + *it - 48;
                std::cout << result << std::endl;
                if(*(it+1) == ' ')
                    return result;
            }
        else if(*it == '.')
            return result;
        else if(*it == ' ' || *it == '+')
            continue;
        else
            break;
    }
    result = isNegative ? result*-1 : result;
    return result;
}
int main()
{
    std::string a = "2147483648";
    std::cout << myAtoi(a) << std::endl;
}
