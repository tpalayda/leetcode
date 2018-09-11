#include <iostream>
#include <vector>

bool isMonotonic(const std::vector<int>& A)
{
    bool increasing = false;
    bool decreasing = false;
    
    for(auto it = A.begin()+1; it != A.end(); ++it)
    {
        if(*it > *(it-1))
            increasing = true;
        if(*it < *(it-1))
            decreasing = true;
    }
    return !(increasing && decreasing);
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

