#include <iostream>
#include <vector>

inline int minCostClimbingStairs(const std::vector<int>& cost)
{
    int f1 = cost[0], f2 = cost[1];
    for(int i = 2; i < cost.size(); ++i)
    {
        int f_i = cost[i] + std::min(f2, f1);
        f1 = f2;
        f2 = f_i;
    }
    return std::min(f1, f2);
}

int main()
{
    std::cout << minCostClimbingStairs({10, 15, 20}) << std::endl;
    std::cout << minCostClimbingStairs({1, 100, 1, 1, 1, 100, 1, 1, 100, 1}) << std::endl;
}
