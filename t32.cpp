#include <iostream>
#include <string>

// 32. Longest Valid Parentheses
// Given a string containing just the characters '(' and ')', find the length of the longest valid (well-formed) parentheses substring.
unsigned longestValidParentheses(const std::string& s)
{
    return 0;
}

int main()
{
    std::cout << longestValidParentheses("(()") << std::endl; // "()" - 2
    std::cout << longestValidParentheses(")()())") << std::endl; // "()()" - 4
}

