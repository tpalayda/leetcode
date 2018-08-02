#include <iostream>
#include <algorithm>
#include <iterator>
#include <cctype>
#include <string>

//Given a string, determine if it is a palindrome, considering only aplhanumeric characters and ignoring cases. Empty string is a valid palindrome.
inline bool isPalindrome(std::string result)
{
    std::transform(result.begin(), result.end(), result.begin(), ::tolower);
    result.erase(std::remove_if(result.begin(),result.end(),[](const unsigned char& x){return !std::isalnum(x);}),result.end());
    for(unsigned i = 0, j = result.size()-1; i < result.size()/2; ++i, --j)
        if(result[i] != result[j])
            return false;
    return true;
    
    std::copy(result.begin(),result.end(),std::ostream_iterator<char>(std::cout, ""));
    std::cout << "\n";
}
int main()
{
    std::cout << isPalindrome("aaa") << std::endl;
}
