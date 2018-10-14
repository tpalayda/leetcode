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
    unsigned min_l = 0;
    unsigned max_r = 1;
    for(unsigned i = 0; i < s.size();)
    {
        if(s.size() - i <= max_r / 2)
            break;
        unsigned j = i, k = i;
        while(k < s.size() - 1 && s[k+1] == s[k]) //skipping duplicates
            ++k;
        i = k + 1;
        while(k < s.size() - 1 && j && s[k+1] == s[j-1]) //expanding
            ++k, --j;
        unsigned length = k - j + 1;
        if(length > max_r)
            min_l = j, max_r = length;
    }
    return s.substr(min_l, max_r);
}

int main()
{
    std::cout << longestPalindrome("cbbd") << std::endl; // bb
    std::cout << longestPalindrome("babad") << std::endl; // bab | aba
    std::cout << longestPalindrome("a") << std::endl; // a
    std::cout << longestPalindrome("ac") << std::endl; // a | c
}
