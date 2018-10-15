#include <iostream>
#include <vector>

// 11. Container With Most Water
unsigned maxArea(const std::vector<int>& height)
{
    auto it = height.begin();
    auto it2 = height.end()-1;
    unsigned maxArea = 0;

    while(it != it2)
    {
        unsigned smallestHeight = std::min(*it, *it2);    
        unsigned currentArea = std::distance(it, it2) * smallestHeight;
        maxArea = std::max(maxArea, currentArea);
        *it > *it2 ? --it2 : ++it;
    }
    return maxArea;
}

int main()
{
    std::cout << maxArea({1, 8, 6, 2, 5, 4, 8, 3, 7}) << std::endl;
    std::cout << maxArea({2, 3, 4, 5, 18, 17, 6}) << std::endl; //16
}
