#include <iostream>
#include <vector>
#include <cmath>

unsigned robotSim(const std::vector<int>& commands, const std::vector<std::vector<int>>& obstacles)
{
    //infinite grid at point(0,0) + faces north
    //obstacles[i][0] obstacles[i][1]
    auto euclideanDistance = [](const std::pair<unsigned,unsigned> p, const std::pair<unsigned,unsigned> q) -> unsigned
    {
        return sqrt(pow(q.first - p.first,2) + pow(q.second - p.second,2));      
    };
    return euclideanDistance({0,0},{3,4});
}

int main()
{
    std::cout << robotSim({},{{}}) << std::endl;
}
