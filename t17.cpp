#include <iostream>
#include <string>
#include <vector>

std::vector<std::string> letterCombinations(const std::string& digits)
{
    if(digits.empty())
        return {};
    const std::vector<std::string> v = {"abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    std::vector<std::string> result;
    if(digits.size() == 1)
    {
        for(const char& ch : v[digits[0]-50])
        {
            std::string temp;
            temp += ch;
            result.emplace_back(temp);
        }
    }
    for(auto i = digits.begin(); i != digits.end(); ++i)
        for(auto j = i+1; j != digits.end(); ++j)
            for(const char& ch : v[*i-50])
                for(const char& ch2 : v[*j-50])
                {
                    std::string temp; 
                    temp += ch;
                    temp += ch2;
                    result.emplace_back(temp); 
                }
    return result;
}
int main()
{
    for(const auto& str : letterCombinations("234"))
    {
        for(const auto& ch : str)
            std::cout << ch;
        std::cout << std::endl;
    }
}
