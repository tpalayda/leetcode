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
    if(isPalindrome(s))
        return s;
    std::unordered_set<char> set;
    std::string result;
    std::string temp_result;
    for(auto it = s.begin(); it != s.end(); ++it)
    {
        if(set.count(*it) && (*it != *(it+1) || isPalindrome(temp_result+*(it+1))))
        {
            temp_result += *it; 
            if(isPalindrome(temp_result) && temp_result.size() > result.size())
                result = std::move(temp_result);
            set.clear();
        }
        set.emplace(*it);
        temp_result += *it;
    }
    return result;
}

int main()
{
    std::cout << longestPalindrome("ababad") << std::endl;
    //std::cout << isPalindrome("aaaaa") << std::endl;
}
