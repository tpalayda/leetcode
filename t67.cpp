#include <iostream>
#include <string>

std::string addBinary(const std::string& a, const std::string& b)
{
    const size_t n1 = a.size();
    const size_t n2 = b.size();
    std::string result;
    result.reserve(n1+n2);
    auto it1 = a.rbegin();
    auto it2 = b.rbegin();
    char carry = '0';
    while(it1 != a.rend() && it2 != b.rend())
    {
        if(*it1 == '1' && *it2 == '1')
        {
            result += "0";
            carry = '1';
        }
        else if(*it1 == '0' && *it2 == '0')
            result += '0';
        else
            if(carry == '1')
            {
                result += '0';
                carry = '1';
            }
            else
                result += '1';
        ++it1,++it2;
    }
    if(carry == '1')
        std::cout << "left to carry" << std::endl;
    if(n1 > n2)
    {
        while(it1 != a.rend())
            result += *it1++;
        std::cout << "n1 is bigger than n2" << std::endl;
    }
    else if(n1 < n2)
    {
        while(it2 != a.rend())
            result += *it2++;
        std::cout << "n2 is bigger than n1" << std::endl;
    }
    return result;
}

int main()
{
    std::cout << addBinary("11","1") << "\n";
}
