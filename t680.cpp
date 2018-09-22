#include <iostream>
#include <string>

//Valid Palindrome II
// Given a non-empty string s, you may delete at most one character. Judge whether you can make it a palindrome.

bool isPalindromeInRange(const std::string& s, const int& i, const int& j)
{
    int m = (i + j)/2;
    for(int k = i; k <= m; ++k)
        if(s[k] != s[j - k + i])
            return false;
    return true;
}

bool validPalindrome(const std::string& s)
{
    const size_t N = s.size();
    for(int i = 0, j = N - 1; i < j; ++i, --j) 
        if(s[i] != s[j])
            return isPalindromeInRange(s, i + 1, j) || isPalindromeInRange(s, i, j - 1);
    return true;
}

int main()
{
    std::cout << validPalindrome("aba") << std::endl; //1
    std::cout << validPalindrome("aaaa") << std::endl; //1
    std::cout << validPalindrome("abca") << std::endl; //1
}
