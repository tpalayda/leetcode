#include <iostream>
#include <vector>
#include <unordered_map>

// 575. Distribute Candies
unsigned distributeCandies(const std::vector<int>& candies)
{
    const size_t numberOfCandies = candies.size();
    unsigned result = 0;
    unsigned givenToBrother = 0;

    std::unordered_map<int, unsigned> occurrences;
    for(const int& candie : candies)
        ++occurrences[candie];

    unsigned numberOfUniqueCandies = occurrences.size();
    if(numberOfUniqueCandies <= numberOfCandies/2)
        return numberOfUniqueCandies;
    else
    {
        for(const auto& it : occurrences)
            if(it.second >= 1 && result < numberOfCandies/2)
                ++result;
    }
    return result;
}

int main()
{
    std::cout << distributeCandies({1, 1, 2, 2, 3, 3}) << std::endl;
    std::cout << distributeCandies({1, 1, 2, 3}) << std::endl;
}
