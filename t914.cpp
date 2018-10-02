#include <iostream>
#include <vector>
#include <unordered_map>

bool hasGroupsSizeX(const std::vector<int>& deck) 
{
    std::unordered_map<int, unsigned> occurrences;
    const size_t deckSize = deck.size();
    if(deckSize & 1)
        return false;
    for(const int& num : deck)
        ++occurrences[num];
    for(const auto& it : occurrences)
        if(it.second & 1)
            return false;
    return true;
}

int main()
{
    std::cout << hasGroupsSizeX({1, 2, 3, 4, 4, 3, 2, 1}) << std::endl; //1
    std::cout << hasGroupsSizeX({1, 1, 1, 2, 2, 2, 3, 3}) << std::endl; //0
    std::cout << hasGroupsSizeX({1}) << std::endl; //0
    std::cout << hasGroupsSizeX({1, 1}) << std::endl; //1
    std::cout << hasGroupsSizeX({1, 1, 2, 2, 2, 2}) << std::endl; //1
    std::cout << hasGroupsSizeX({1, 1, 2, 2, 2, 2}) << std::endl; //1
    std::cout << hasGroupsSizeX({0, 0, 0, 1, 1, 1, 2, 2, 2}) << std::endl; //1
}
