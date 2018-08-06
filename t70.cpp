#include <iostream>

constexpr size_t fibonacci(const size_t& n)
{
    if(n == 0)
        return 0;
    return n == 1 ? 1 : fibonacci(n-1)+fibonacci(n-2);
}
constexpr size_t climbStairs(const size_t& n)
{
    return fibonacci(n+1);
}
int main()
{
    std::cout << climbStairs(4) << std::endl;
}
