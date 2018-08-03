#include <iostream>
#include <string>

std::string countAndSay(const int& n)
{
    if(n == 1)
        return "1";
    return countAndSay(n-1);
}
int main()
{
    std::cout << countAndSay(3);
}
