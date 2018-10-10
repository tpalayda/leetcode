#include <iostream>
#include <string>

// 32. Longest Valid Parentheses
// Given a string containing just the characters '(' and ')', find the length of the longest valid (well-formed) parentheses substring.
unsigned longestValidParentheses(const std::string& s)
{
    unsigned result = 0;
    unsigned left = 0;
    unsigned right = 0;

    for(const char& ch : s)
    {
        ch == '(' ? ++left : ++right;
        if(left == right)
            result = std::max(result, 2 * left);
        else if(right > left)
            right = left = 0;
    }

    right = left = 0;

    for(auto it = s.rbegin(); it != s.rend(); ++it)
    {
        *it == '(' ? ++left : ++right;
        if(left == right)
            result = std::max(result, 2 * left);
        else if(left > right)
            right = left = 0;
    }
    return result;
}

int main()
{
    std::cout << longestValidParentheses("(()") << std::endl; // "()" - 2
    std::cout << longestValidParentheses(")()())") << std::endl; // "()()" - 4
}

