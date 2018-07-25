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
    int result = 0;
    int min_val = std::numeric_limits<int>::min();
    int max_val = std::numeric_limits<int>::max();
    bool isNegative = false;
    bool overflow = false;
    for(auto it = str.begin(); it != str.end(); ++it)
    {
        if(*it == '+' && !isNumeric(*(it+1)))
            return 0;
        if(*it == '-' && isNumeric(*(it+1)))
        {
            isNegative = !isNegative;
            continue;
        }
        if(isNumeric(*it))
        {
            if((!isNegative && result > (max_val-(*it-'0'))/10) || (isNegative && -result < (min_val+(*it-'0'))/10))
            {
                overflow = true;
                break;
            }
            result = result*10 + *it - '0';
            if(!isNumeric(*(it+1)))
                break;
        }
        else if(*it == '.')
            return result;
        else if(*it == ' ' || *it == '+')
            continue;
        else
            break;
    }
    if(overflow)
        return isNegative ? min_val : max_val;
    result = isNegative ? result*-1 : result;
    return result;
}
int main()
{
    //1a,+-2
    std::cout << myAtoi(" -1") << std::endl;
}
