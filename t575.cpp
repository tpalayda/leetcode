#include <iostream>
#include <vector>
#include <unordered_set>

// 575. Distribute Candies
unsigned distributeCandies(const std::vector<int>& candies)
{
    return std::min(std::unordered_set<int>(candies.begin(), candies.end()).size(), candies.size()/2);
}

int main()
{
    std::cout << distributeCandies({1, 1, 2, 2, 3, 3}) << std::endl;
    std::cout << distributeCandies({1, 1, 2, 3}) << std::endl;
}
