#include <iostream>

constexpr guess(const int& m);
constexpr int guessNumber(const int& n)
{
    int l = 1;
    int r = n;
    while(l <= r)
    {
        int m = l + (r - l)/2; //to prevent overflowing
        int result = guess(m);
        if(!result)
            return m;
        else if(result < 0)
            r = m - 1;
        else
            l = m + 1;
    }            
    return -1;
}

int main()
{

}
