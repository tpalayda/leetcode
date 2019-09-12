#include <iostream>
#include <vector>
#include <string>

int longestCommonSubsequence(const std::string& text1, const std::string& text2) 
{
    std::vector<std::vector<int>> vec(text1.size() + 1, std::vector<int>(text2.size() + 1));
    for(int i = 1; i <= text1.size(); ++i)
    {
        for(int j = 1; j <= text2.size(); ++j)
        {
            if(text1[i-1] == text2[j-1])
                vec[i][j] = vec[i-1][j-1] + 1;
            else 
                vec[i][j] = std::max(vec[i-1][j], vec[i][j-1]);
        }
    }
    return vec[text1.size()][text2.size()];
}

int main()
{
    std::cout << longestCommonSubsequence("abcde", "ace") << std::endl;
    std::cout << longestCommonSubsequence("abc", "abc") << std::endl;
    std::cout << longestCommonSubsequence("abc", "def") << std::endl;
}
