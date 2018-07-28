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
    const size_t n = s.size();
    if(isPalindrome(s) || n < 2)
        return s;
    std::vector<std::string> v;
    std::string result;
    v.reserve(n-1);
    for(unsigned i = 0; i < n; ++i)
    {
        result += s[i];
        if(isPalindrome(result))
            v.emplace_back(result);
        else
        {
            result.clear();
            result = s[i];
        }
    }
    result.clear();
    for(const auto& str : v)
        if(str.size() > result.size())
            result = std::move(str); 
    return result;
}

int main()
{
    std::cout << longestPalindrome("babad") << std::endl;
    //std::cout << isPalindrome("aaaaa") << std::endl;
}
