#include <iostream>
#include <vector>

constexpr bool checkBrackets(const char& i, const char& j)
{
    return (i == '(' && j == ')') || (i == '[' && j == ']') || (i == '{' && j == '}') ? true : false;
}
bool isValid(const std::string& s)
{
    const size_t n = s.size();
    if(s.empty())
        return true;
    if(n & 1)
        return false;
    std::vector<char> v;
    v.reserve(n/2);
    for(const char& ch : s)
        if(ch == '(')
            v.emplace_back(')');
        else if(ch == '[')
            v.emplace_back(']');
        else if(ch == '{')
            v.emplace_back('}');
        else if(v.empty() || v.back() != ch)
            return false;
        else
            v.pop_back();
    return v.empty();
}
int main()
{
    std::cout << isValid("()[]{}") << "\n";
}
