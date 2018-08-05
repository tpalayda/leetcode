#include <iostream>
#include <string>

std::string reverseString(const std::string& s)
{
    return {s.rbegin(),s.rend()};
}
int main()
{
    std::cout << reverseString("hello") << std::endl;
}
