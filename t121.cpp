#include <iostream>
#include <vector>

int maxProfit(const std::vector<int>& prices)
{
    int max = 0;
    int result = 0;
    for(auto it = prices.begin()+1; it != prices.end(); ++it)
    {
        max = std::max(0,max + *it - *(it-1));
        result = std::max(result,max);
    }
    return result;
}

int main()
{
    const std::vector<int> v = {7,1,5,3,6,4};
    std::cout << maxProfit(v) << std::endl;
}
