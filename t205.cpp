#include <iostream>
#include <string>
#include <unordered_map>

bool isIsomorphic(const std::string& s, const std::string& t)
{
    if(s.size() != t.size())
        return false;
    std::unordered_map<char,unsigned> occurrences_1;
    std::unordered_map<char,unsigned> occurrences_2;
    for(unsigned i = 0; i < s.size(); ++i)
    {
        if(occurrences_1[s[i]] != occurrences_2[t[i]])
            return false;
        occurrences_1[s[i]] = i + 1;
        occurrences_2[t[i]] = i + 1;
    }
    return true;
}
int main()
{
    std::cout << isIsomorphic("ab","aa") << std::endl;
}
