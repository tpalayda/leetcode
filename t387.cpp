#include <iostream>
#include <string>
#include <unordered_map>

int firstUniqueChar(const std::string& s)
{
    std::unordered_map<char,unsigned> occurrences;
    for(const char& ch : s)
        ++occurrences[ch];
    for(unsigned i = 0; i < s.size(); ++i)
        if(occurrences[s[i]] == 1)
            return i;
    return -1;
}

int main()
{
    std::cout << firstUniqueChar("leetcode") << std::endl;
    std::cout << firstUniqueChar("loveleetcode") << std::endl;
}
