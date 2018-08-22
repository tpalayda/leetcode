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

    std::unordered_map<char,std::string> hashTable;
    for(unsigned i = 0; i < pattern.size(); ++i)
        if(!hashTable.count(pattern[i]))
            hashTable[pattern[i]] = v[i];

    std::copy(v.begin(), v.end(), std::ostream_iterator<std::string>(std::cout, " "));
    return 0;
}

int main()
{
    std::cout << wordPattern("abba","dog cat cat dog") << std::endl;
}
