#include <iostream>
#include <vector>

std::vector<int> plusOne(const std::vector<int>& digits)
{
    const size_t n = digits.size();
    std::vector<int> result = digits;
    result[n-1] += 1;
    for(int j = n-1; j >= 0; --j)
    {
        if(!j && result[j] > 9)
        {
            result[j] = 0;
            result.emplace(result.begin(),1);
        }
        else if(result[j] > 9 && j)
        {
            result[j] = 0;
            result[j-1] += 1;
        }
    }
    return result;
}
int main()
{
    std::vector<int> digits = {9,9,9};
    for(const int& el : plusOne(digits))
        std::cout << el << ",";
    std::cout << "\n";
}
