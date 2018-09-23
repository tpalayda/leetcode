#include <iostream>
#include <vector>

inline bool canPlaceFlowers(const std::vector<int>& flowerbed, const int& n)
{
    unsigned howManyCanPlace = 0;
    unsigned i = 0;
    for(unsigned i = 0; i < flowerbed.size(); ++i)
        if(!flowerbed[i] && (i == 0 || flowerbed[i-1] == 0) && (i == flowerbed.size() - 1 || flowerbed[i + 1] == 0))
            ++howManyCanPlace;
    return howManyCanPlace >= n;
}

int main()
{
    std::cout << canPlaceFlowers({1,0,0,0,1}, 1) << std::endl; //1
    std::cout << canPlaceFlowers({1,0,0,0,1}, 2) << std::endl; //0
    std::cout << canPlaceFlowers({1,0,0,0,0,1}, 2) << std::endl; //0
    std::cout << canPlaceFlowers({0,0,1,0,1}, 1) << std::endl; //1
}
