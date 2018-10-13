#include <iostream>
#include <string>
#include <vector>

std::vector<std::string> letterCombinations(const std::string& digits)
{
    if(digits.empty())
        return {};
    const std::vector<std::string> v = {"abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    std::vector<std::string> result;
    result.emplace_back("");
    
    for(const char& digit : digits)
    {
        const std::string& string = v[digit - 50];
        std::vector<std::string> temp;
        for(unsigned i = 0; i < string.size(); ++i)
            for(unsigned j = 0; j < result.size(); ++j)
                temp.emplace_back(result[j] + string[i]);
        if(!temp.empty())
            result.swap(temp);
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
