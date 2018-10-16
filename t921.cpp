#include <iostream>
#include <string>

/*
921. Minimum Add to Make Parentheses Valid
Given a string S of '(' and ')' parentheses, we add the minimum number of parentheses ( '(' or ')', and in any positions ) so that the resulting parentheses string is valid.
*/
int minAddToMakeValid(const std::string& s)
{
    int ans = 0;
    int bal = 0;
    for(const char& ch : s)
    {
        bal += ch == '(' ? 1 : -1;
        if(bal == -1)
            ++ans, ++bal;
    }
    return ans + bal;
}

int main()
{
    std::cout << minAddToMakeValid("())") << std::endl; //1
    std::cout << minAddToMakeValid("(((") << std::endl; //3
    std::cout << minAddToMakeValid("()") << std::endl; //0
    std::cout << minAddToMakeValid("()))((") << std::endl; //4
}
