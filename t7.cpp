#include <iostream>
#include <limits>
//program to reverse an integer ex. 321 => 123

int reverse(int x)
{
    int reversed_num = x % 10;
    int max_val = std::numeric_limits<int>::max()/10;
    int min_val = std::numeric_limits<int>::min()/10;
    while(x/=10)
    {
        if(reversed_num > max_val || reversed_num < min_val)
            return 0;
        reversed_num = reversed_num*10 + (x % 10); //may overflow
    }
    return reversed_num;
}

int main()
{
    std::cout << reverse(1056389759) << std::endl;
}
