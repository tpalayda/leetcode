#include <iostream>
#include <vector>
#include <string>

std::string longestPalindrome(const std::string& s) 
{
    std::vector<std::vector<bool>> dp(s.size(), std::vector<bool>(s.size(), 0));
    
    int start = 0, len = 0;
    
    for(int i = s.size() - 1; i >= 0; --i)
    {
        for(int j = i; j < s.size(); ++j)
        {
            dp[i][j] = ((s[i] == s[j]) && (j-i < 3 || dp[i+1][j-1]));
            if(dp[i][j] && (j-i+1 > len))
            {
                start = i, len = j-i+1;
            }
        }
    }
    return s.substr(start, len);
}
int main()
{
    std::cout << longestPalindrome("babad") << std::endl;
}
