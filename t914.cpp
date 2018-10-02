#include <iostream>
#include <vector>

bool hasGroupsSizeX(const std::vector<int>& deck) 
{
    return false;
}

int main()
{
    std::cout << hasGroupsSizeX({1, 2, 3, 4, 4, 3, 2, 1}) << std::endl; //1
    std::cout << hasGroupsSizeX({1, 1, 1, 2, 2, 2, 3, 3}) << std::endl; //0
    std::cout << hasGroupsSizeX({1}) << std::endl; //0
    std::cout << hasGroupsSizeX({1, 1}) << std::endl; //1
    std::cout << hasGroupsSizeX({1, 1, 2, 2, 2, 2}) << std::endl; //1
}
