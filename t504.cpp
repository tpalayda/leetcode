#include <iostream>
#include <string>

std::string convertToBase7(const int& num)
{
    if(!num)
        return "0";
    std::string result;
    int n = std::abs(num);
    while(n)
    {
        result = static_cast<char>(n % 7 + 48) + result;
        n /= 7;
    }
    return num > 0 ? result : '-' + result;
}

int main()
{
    std::cout << convertToBase7(100) << std::endl;
    std::cout << convertToBase7(-7) << std::endl;
    std::cout << convertToBase7(0) << std::endl;
}
