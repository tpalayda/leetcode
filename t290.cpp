#include <iostream>
#include <string>
#include <vector>
#include <iterator>
#include <unordered_map>

//Word Pattern
bool wordPattern(const std::string& pattern, const std::string& str)
{
    std::vector<std::string> v;
    std::string temp;
    for(const char& ch : str)
        if(ch == ' ')
        {
            v.emplace_back(temp);
            temp = "";
        }
        else
            temp += ch;
    v.emplace_back(temp);

    if(v.size() != pattern.size())
        return false;

    std::unordered_map<char,std::string> hashTable;
    for(unsigned i = 0; i < pattern.size(); ++i)
        if(!hashTable.count(pattern[i]))
            hashTable[pattern[i]] = v[i];
    for(auto it = hashTable.begin(), it2 = ++hashTable.begin(); it2 != hashTable.end(); ++it, ++it2)
        if(hashTable[it->first] == hashTable[it2->first])
            return false;   
    for(unsigned i = 0; i < pattern.size(); ++i)
        if(hashTable[pattern[i]] != v[i])
            return false;
    
    std::copy(v.begin(), v.end(), std::ostream_iterator<std::string>(std::cout, " "));
    return true;
}

int main()
{
    std::cout << wordPattern("abba","dog cat cat dog") << std::endl;
    std::cout << wordPattern("abba","dog cat cat fish") << std::endl;
    std::cout << wordPattern("aaaa","dog cat cat dog") << std::endl;
    std::cout << wordPattern("abba","dog dog dog dog") << std::endl;
}
