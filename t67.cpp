#include <iostream>
#include <string>

//'1' = 49, '0' = 48
std::string addBinary(const std::string& a, const std::string& b)
{
    std::string result;
    int carry = 0;
    for(int i = a.size()-1, j = b.size()-1; i >= 0 || j >= 0; --i,--j)
    {
        int sum = carry;
        if(i >= 0) sum += a[i] - 48;
        if(j >= 0) sum += a[j] - 48;
        result.push_back((sum % 2) + 48);
        carry = sum / 2;
    }
    if(carry)
        result.push_back(carry + 48);
    return {result.rbegin(),result.rend()};
}

int main()
{
    std::cout << addBinary("11","1") << "\n";
}
