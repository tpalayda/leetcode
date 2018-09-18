#include <iostream>
#include <string>

std::string toLowerCase(const std::string& str)
{
    std::string result;
    for(const char& ch : str)
        if(ch < 97 && ch > 64)
            result += ch + 32;
        else
            result += ch;
    return result;
}

int main()
{
    std::cout << toLowerCase("Hello") << std::endl; 
    std::cout << toLowerCase("here") << std::endl; 
    std::cout << toLowerCase("LOVELY") << std::endl; 
}
