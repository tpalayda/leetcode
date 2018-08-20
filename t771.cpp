#include <iostream>
#include <string>
#include <unordered_set>

//Jewels and Stones
unsigned numJewelsInStones(const std::string& J, const std::string& S)
{
    unsigned result = 0;
    std::unordered_set<char> hashTable;
    for(const char& jewel : J)
        hashTable.emplace(jewel);
    for(const char& stone : S)
        if(hashTable.count(stone))
            ++result;
    return result;
}
int main()
{
    std::cout << numJewelsInStones("aA","aAAbbbbb") << std::endl;
    std::cout << numJewelsInStones("zA","ZZZZ") << std::endl;
}
