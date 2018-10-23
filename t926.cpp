#include <iostream>
#include <string>

// 926. Flip String to Monotone Increasing
/*
A string of '0's and '1's is monotone increasing if it consists of some number of '0's (possibly 0), followed by some number of '1's (also possibly 0.)

We are given a string S of '0's and '1's, and we may flip any '0' to a '1' or a '1' to a '0'.

Return the minimum number of flips to make S monotone increasing.
*/
int minFlipsMonoIncr(const std::string& S)
{
    int f0 = 0;
    int f1 = 0;
    for(const char& ch : S)
    {
        f0 += ch - 48;
        f1 = std::min(f0, f1 + 1 - (ch - 48));
    }
    return f1;
}

int main()
{
    std::cout << minFlipsMonoIncr("00110") << std::endl; //1
    //Explanation: We flip the last digit to get 00111.

    std::cout << minFlipsMonoIncr("010110") << std::endl; //2
    //Explanation: We flip to get 011111, or alternatively 000111.

    std::cout << minFlipsMonoIncr("00011000") << std::endl; //2
    //Explanation: We flip to get 00000000.
}
