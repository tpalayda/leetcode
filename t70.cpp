#include <iostream>

/*constexpr size_t fibonacci(const size_t& n)
{
    if(n == 0)
        return 0;
    return n == 1 ? 1 : fibonacci(n-1)+fibonacci(n-2);
}*/
constexpr size_t fibonacci(const size_t& n)
{
    size_t F0 = 0, F1 = 1, result = 0;
    for(size_t i = 3; i <= n; ++i)
    {
        result = F0+F1;
        F0 = F1;
        F1 = result;
    }
    return result;
}
constexpr size_t climbStairs(const size_t& n)
{
    return fibonacci(n+2);
}
int main()
{
    std::cout << climbStairs(0) << std::endl;
}
