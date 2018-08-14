#include <iostream>
#include <string>
#include <unordered_map>

bool isIsomorphic(const std::string& s, const std::string& t)
{
    if(s.size() != t.size())
        return false;
    std::unordered_map<char,unsigned> occurrences_1;
    std::unordered_map<char,unsigned> occurrences_2;
    for(const char& ch : s)
        ++occurrences_1[ch];
    for(const char& ch : t)
        ++occurrences_2[ch]; 
    for(auto it = occurrences_1.begin(), it2 = occurrences_2.begin(); it != occurrences_1.end(); ++it, ++it2)
        if((*it2).second != (*it).second)
            return false;
    return true;
}
int main()
{
    std::cout << isIsomorphic("abba","abab") << std::endl;
}
