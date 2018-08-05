#include <iostream>

size_t lengthOfLastWord(const std::string& s)
{
    size_t length = 0;
    for(int j = s.size()-1; j >= 0; ++length,--j)
        if(s[j] == ' ')
            return length;
    return length;
}
int main()
{
    std::cout << lengthOfLastWord(" ") << std::endl;
}
