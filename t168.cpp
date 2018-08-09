#include <iostream>
#include <string>

std::string convertToTitle(int n)
{
    return !n ? "" : convertToTitle(n/26) + char('A' + --n % 26);
}

int main()
{
    std::cout << convertToTitle(27) << std::endl;
}
