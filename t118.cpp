#include <iostream>
#include <vector>

std::vector<std::vector<int>> generate(const int& numRows)
{
    std::vector<std::vector<int>> v;
    for(unsigned i = 0; i < numRows; ++i)
    {
        v.emplace_back(std::vector<int>(i+1,1));
        for(unsigned j = 1; j < i; ++j)
            v[i][j] = v[i-1][j-1] + v[i-1][j];
    }
    return v;
}
int main()
{
    for(const auto& v : generate(5))
    {
        for(const auto& el : v)
            std::cout << el << " ";
        std::cout << std::endl;
    }
}
