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
    
    std::vector<char> open_brackets;
    std::vector<char> closed_brackets;

    open_brackets.reserve(n/2);
    closed_brackets.reserve(n/2);

    for(const char& ch : s)
        if(ch == '(' || ch == '[' || ch == '{')
            open_brackets.emplace_back(ch);
        else
            closed_brackets.emplace_back(ch);
    for(unsigned i = 0; i < open_brackets.size(); ++i)
        if(!checkBrackets(open_brackets[open_brackets.size()-1-i],closed_brackets[i]))
            return false;
    return true;
}
int main()
{
    std::cout << isValid("()[]{}") << "\n";
}
