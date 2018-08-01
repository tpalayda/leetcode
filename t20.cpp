#include <iostream>

bool isValid(const std::string& s)
{
    if(s.empty())
        return true;
    if(s.size() & 1)
        return false;
    bool isValid = false;
    for(unsigned i = 0, j = s.size()-1; i < s.size()/2; ++i, --j)
    {
        std::cout << s[i] << "," << s[j] << std::endl;
        isValid = (s[i] == '(' && s[j] == ')') || (s[i] == '[' && s[j] == ']') || (s[i] == '{' && s[j] == '}') ? true : false;
    }
    return isValid;
}
int main()
{
    std::cout << isValid("(])") << "\n";
}
