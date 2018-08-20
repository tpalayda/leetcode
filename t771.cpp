#include <iostream>
#include <string>
#include <vector> //unordered_map can be used as well

//Jewels and Stones
unsigned numJewelsInStones(const std::string& J, const std::string& S)
{
    std::vector<unsigned> v('z'-'A',0);
    std::cout << 'z'-'A' << std::endl;
    return 0;
}
int main()
{
    std::cout << numJewelsInStones("aA","aAAbbbbb") << std::endl;
    std::cout << numJewelsInStones("zA","ZZZZ") << std::endl;
}
