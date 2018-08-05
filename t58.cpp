#include <iostream>

size_t lengthOfLastWord(const std::string& s)
{
    size_t length = 0;
    for(unsigned i = 0; i < s.size(); ++i)
    {
        if(s[i] != ' ')
            ++length;
        else if(s[i] == ' ' && i == s.size()-1)
            return length;
        else if(s[i] == ' ' && i+1 < s.size() && s[i+1] != ' ')
            length = 0;
    }
    return length;
}
int main()
{
    std::cout << lengthOfLastWord("") << std::endl;
}
