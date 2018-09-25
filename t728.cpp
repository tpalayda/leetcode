#include <iostream>
#include <vector>
#include <iterator>

constexpr bool isSelfDividing(const int& num)
{
    int temp = num;
    int digit = temp % 10;

    while(temp) 
    {
        if(!digit || num % digit)
            return false;
        temp /= 10;
        digit = temp % 10;
    }
    return true;
}

inline std::vector<int> selfDividingNumbers(const int& left, const int& right)
{
    std::vector<int> selfDividingNumbers;
    for(int i = left; i <= right; ++i)
        if(isSelfDividing(i))
            selfDividingNumbers.emplace_back(i);
    return selfDividingNumbers;
}

int main()
{
    const std::vector<int> result = selfDividingNumbers(1, 22);
    std::copy(result.begin(), result.end(), std::ostream_iterator<int>(std::cout, " "));
}
