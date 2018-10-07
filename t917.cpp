#include <iostream>
#include <string>

constexpr bool isLetter(const char& ch)
{
    return (ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z');
}

// 917. Reverse Only Letters
std::string reverseOnlyLetters(const std::string& s)
{
    std::string result;

    for(int i = 0, j = s.size() - 1; i < s.size() && j >= 0;)
    {
        if(isLetter(s[i]) && isLetter(s[j]))
        {
            result += s[j];
            j = j > 0 ? --j : 0;
            ++i;
        }
        else if(!isLetter(s[i]) && isLetter(s[j]))
            result += s[i++];
        else if(!isLetter(s[j]) && isLetter(s[i]))
            j = j > 0 ? --j : 0;
        else // i & j !Letter
        {
            result += s[i++];
            j = j > 0 ? --j : 0;
        }
    }

    return result;
}

int main()
{
    std::cout << reverseOnlyLetters("ab-cd") << std::endl; // Output: "dc-ba"
    std::cout << reverseOnlyLetters("a-bC-dEf-ghIj") << std::endl; // Output: "j-Ih-gfE-dCba"
    std::cout << reverseOnlyLetters("Test1ng-Leet=code-Q!") << std::endl; // Output: "Qedo1ct-eeLg=ntse-T!"
}
