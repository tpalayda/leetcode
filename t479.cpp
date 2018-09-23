#include <iostream>

//The range of n is [1,8].
constexpr bool isPalindrome(int n)
{
    int number = n;
    int reversed = n % 10;
    while(n /= 10)
        reversed = reversed * 10 + (n % 10);
    return reversed == number;
}

constexpr int largestPalindrome(int n)
{
    int max_num = 1;
    while(n--)
        max_num *= 10;
    int min_num = max_num / 10;
    max_num -= 1;
    for(int i = max_num; i >= min_num; --i)
    {
        int x = i * max_num;
        if(isPalindrome(x))
            return x % 1337;
    }
    return -1;
}

int main()
{
    std::cout << largestPalindrome(2) << std::endl;
    std::cout << largestPalindrome(3) << std::endl;
    std::cout << largestPalindrome(8) << std::endl;
}
