#include <iostream>

bool isPalindrome(const int& x)
{
    if(x < 0)
        return false;
    long long exp = 1;
    while(exp*10 <= x)
        exp *= 10;
    for(unsigned i = 1; i != exp; i *= 10, exp /= 10)
    {
        if(x/i%10 != x/exp%10)
            return false;
        else if(i*10 == exp)
            break;
    }
    return true;
}
int main()
{
    std::cout << isPalindrome(1410110141) << std::endl;
}
