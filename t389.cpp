#include <iostream>
#include <string>
#include <vector>

char findTheDifference(const std::string& s, const std::string& t)
{
    unsigned result = 0;
    for(const char& ch : s+t)
        result ^= ch;
    return result;
}
int main()
{
    std::cout << findTheDifference("abcd","abced") << std::endl;
}
