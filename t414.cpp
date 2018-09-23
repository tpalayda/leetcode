#include <iostream>
#include <vector>
#include <limits>

int thirdMax(const std::vector<int>& nums)
{
    constexpr long l_min = std::numeric_limits<long long>::min();
    long long first_max, second_max, third_max;
    first_max = second_max = third_max = l_min;
    for (auto num : nums) {
        if (num <= third_max || num == second_max || num == first_max) continue;
        third_max = num;
        if (third_max > second_max) std::swap(second_max, third_max);
        if (second_max > first_max) std::swap(first_max, second_max);
    }
    return third_max == l_min ? first_max : third_max;
}

int main()
{
    std::cout << thirdMax({3, 2, 1}) << std::endl; //1
    std::cout << thirdMax({1, 2}) << std::endl; //2
    std::cout << thirdMax({2, 2, 3, 1}) << std::endl; //1
    std::cout << thirdMax({1, 2, -2147483648}) << std::endl; //min
    std::cout << thirdMax({1, 1, 2}) << std::endl; //2
}
