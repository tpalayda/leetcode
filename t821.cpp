#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <cmath>
#include <limits>

//Shortest Distance to a Character
std::vector<int> shortestToChar(const std::string& S, const char& C)
{
    const size_t size = S.size();
    std::vector<int> result(size, size);

    int prev = -size;
    
    for(unsigned i = 0; i < size; ++i)
    {
        if(S[i] == C)
            prev = i;
        result[i] = std::abs(i - prev);
    }
    for(int i = size - 1; i >= 0; --i)
    {
        if(S[i] == C)
            prev = i;
        result[i] = std::min(std::abs(prev - i), result[i]);
    }

    return result;
}

int main()
{
    for(const int& el : shortestToChar("loveleetcode",'e'))
        std::cout << el << " ";
    std::cout << std::endl;
}
