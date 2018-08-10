#include <iostream>
#include <string>

unsigned titleToNumber(const std::string& s)
{
    unsigned result = 0;
    for(const char& ch : s)
        result = result * 26 + (ch - 'A' + 1);
    return result;
}
int main()
{
    std::cout << titleToNumber("") << std::endl;
}
