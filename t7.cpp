#include <iostream>
#include <limits>
//program to reverse an integer ex. 321 => 123

int reverse(int x)
{
    int reversed_num = x % 10;
    while(x/=10)
        reversed_num = reversed_num*10 + (x % 10); //may overflow
    return reversed_num;
}

int main()
{
    std::cout << reverse(321) << std::endl;
 //   std::cout << std::numeric_limits<int>::max() << std::endl; 
}
