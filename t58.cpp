#include <iostream>

size_t lengthOfLastWord(const std::string& s)
{
    size_t length = 0;
    const size_t n = s.size();
    for(int i = n-1; i >= 0; --i)
        if(s[i] != ' ')
            ++length;
        else if(s[i] == ' ' && length)
            return length;
    return length;
}
int main()
{
    std::cout << lengthOfLastWord("b aaaaaaaaaaaa ") << std::endl;
}
