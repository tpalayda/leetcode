#include <iostream>
#include <string>
#include <vector>

std::string longestCommonPrefix(const std::vector<std::string>& strs)
{
    if(strs.empty())
        return "";
    std::string result = "";
    for(unsigned i = 0; i < strs.size(); result += strs[0][i], ++i)
        for(unsigned j = 0; j < strs.size(); ++j)
            if(i >= strs[j].size() || (j > 0 && strs[j][i] != strs[j-1][i]))
                return result;
    return result;
}

int main()
{
    const std::vector<std::string> v1 = {"flower","flow","flight"};
    const std::vector<std::string> v2 = {"dog","racecar","car"};
    std::cout << longestCommonPrefix(v1) << std::endl;
    std::cout << longestCommonPrefix(v2) << std::endl;
}
