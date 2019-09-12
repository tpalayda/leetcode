#include <iostream>
#include <vector>
#include <string>

int longestPalindromeSubseq(const std::string& s) {
    std::vector<std::vector<int>> dp(s.size(), std::vector<int>(s.size(), 0));
    
    for(int i = s.size() - 1; i >= 0; --i)
    {
        dp[i][i] = 1;
        for(int j = i + 1; j < s.size(); ++j)
        {
            if(s[i] == s[j])
                dp[i][j] = dp[i+1][j-1] + 2;
            else
                dp[i][j] = std::max(dp[i+1][j], dp[i][j-1]);
        }
    }
    return dp[0][s.size()-1];
}

int main()
{
    std::cout << longestPalindromeSubseq("bbbab") << std::endl;
    std::cout << longestPalindromeSubseq("cbbd") << std::endl;
}
