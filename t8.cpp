#include <iostream>
#include <string>

int main()
{
    int result = 0;
    std::string a = "123";
    for(const char& c : a)
        result = result*10 + c - 48;
    std::cout << result << std::endl;
}
