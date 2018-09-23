#include <iostream>
#include <string>

//Given a number K, we would want to reformat the strings such that each group contains exactly K characters, except for the first group which could be shorter than K, but still must contain at least one character. 

std::string licenseKeyFormatting(const std::string& S, const int& K)
{
    std::string str;
    std::string result;
    for(char ch : S)
        if(ch != '-') 
        {
            if(ch > 96) //lowercase
                ch -= 32; //make uppercase
            str += ch;
        }
    unsigned counter = 0;
    unsigned numberToPutInFirst = str.size() - K;
    unsigned i = 0;
    numberToPutInFirst %= K;

    while(i < numberToPutInFirst)
        result += str[i++];
    if(numberToPutInFirst < str.size() && !result.empty())
        result += '-';
    while(i < str.size())
    {
        result += str[i];
        if(++counter == K && i != str.size()-1)
        {
            result += '-';
            counter = 0;
        }
        ++i;
    }
    return result;
}

int main()
{
    std::cout << licenseKeyFormatting("5F3Z-2e-9-w",4) << std::endl; //5F3Z-2E9W
    std::cout << licenseKeyFormatting("2-5g-3-J",4) << std::endl; //2-5G3J
    std::cout << licenseKeyFormatting("2-5g-3-J",2) << std::endl; //2-5G-3J
    std::cout << licenseKeyFormatting("2-4A0r7-4k",3) << std::endl; //24-A0R-74K
    std::cout << licenseKeyFormatting("2",2) << std::endl; //24-A0R-74K
    std::cout << licenseKeyFormatting("aaaa",2) << std::endl; //AA-AA
}
