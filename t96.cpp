#include <iostream>

//Cn+1 = (4n+2/n+2)*Cn, C0 = 1;

unsigned numTrees(const unsigned& n)
{
    long result = 1;
    for(unsigned i = 0; i < n; ++i)
        result = result * (4*i+2)/(i+2);
    return static_cast<unsigned>(result);
}

int main()
{
    std::cout << numTrees(3) << std::endl;
}
