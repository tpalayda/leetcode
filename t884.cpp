#include <iostream>
#include <vector>
#include <string>
#include <iterator>
#include <unordered_map>

std::vector<std::string> uncommonFromSentences(const std::string& A, const std::string& B)
{
    std::unordered_map<std::string,unsigned> hashTable;
    std::vector<std::string> v;
    std::string temp;
    for(const char& ch : A)
        if(ch == ' ')
        {
            ++hashTable[temp];
            temp = "";
        }
        else
            temp += ch; 
    ++hashTable[temp]; //last word
    temp = "";
    for(const char& ch : B)
        if(ch == ' ')
        {
            ++hashTable[temp];
            temp = "";
        }
        else
            temp += ch;
    ++hashTable[temp]; //last word
    for(const auto& it : hashTable)
        if(it.second == 1)
            v.emplace_back(it.first);
    return v;
}
int main()
{
    std::vector<std::string> v = uncommonFromSentences("apple apple", "banana");
    std::copy(v.begin(),v.end(),std::ostream_iterator<std::string>(std::cout, " "));
}
