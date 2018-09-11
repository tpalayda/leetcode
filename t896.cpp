#include <iostream>
#include <vector>

bool isMonotonic(const std::vector<int>& A)
{
    auto it = A.begin()+1;
    while(*it == *(it-1) && it != A.end()) ++it;
    if(it == A.end())
        return true;

    if(*it >= *(it-1)) //increasing
        while(*it >= *(it-1) && it != A.end()) ++it;
    else //decreasing
        while(*it <= *(it-1) && it != A.end()) ++it;
    return it == A.end();
}

int main()
{
    std::cout << isMonotonic({1,2,2,3}) << std::endl; //true
    std::cout << isMonotonic({6,5,4,4}) << std::endl; //true
    std::cout << isMonotonic({1,3,2}) << std::endl; //false
    std::cout << isMonotonic({1,2,4,5}) << std::endl; //true
    std::cout << isMonotonic({1}) << std::endl; //true
    std::cout << isMonotonic({0,5,1,2,3,575,44,123,12,3,546}) << std::endl; //false
    std::cout << isMonotonic({1,1,1}) << std::endl; //true
    std::cout << isMonotonic({1,1,2}) << std::endl; //true
}

