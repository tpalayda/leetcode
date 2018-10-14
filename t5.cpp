#include <iostream>
#include <string>
#include <vector>
#include <unordered_set>

//we may assume that the maximum length of s <= 1000
bool isPalindrome(const std::string& s)
{
    return s == std::string(s.rbegin(),s.rend());
}
std::string longestPalindrome(const std::string& s)
{
    std::string result;

    for(unsigned i = 0; i < s.size(); ++i)
    {
        std::string temp;
        temp += s[i];
        for(unsigned j = i + 1; j < s.size(); ++j)
        {
            if(isPalindrome(temp) && temp.size() > result.size())
                result = temp;
            temp += s[j];
        }
        if(isPalindrome(temp) && temp.size() > result.size())
            result = temp;
    }
    return result;
}

int main()
{
    std::cout << longestPalindrome("cbbd") << std::endl; // bb
    std::cout << longestPalindrome("babad") << std::endl; // bab | aba
    std::cout << longestPalindrome("a") << std::endl; // a
    std::cout << longestPalindrome("ac") << std::endl; // a | c
}
