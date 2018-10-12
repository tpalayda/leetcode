#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
#include <algorithm>
#include <set>

std::vector<std::vector<std::string>> groupAnagrams(const std::vector<std::string>& strs)
{
    std::vector<std::vector<std::string>> anagrams;
    std::unordered_map<std::string, std::multiset<std::string>> occurrences;

    for(const std::string& str : strs)
    {
        std::string temp = str;
        std::sort(temp.begin(), temp.end());
        occurrences[temp].emplace(str);
    }
    for(const auto& it : occurrences)
    {
        std::vector<std::string> anagram(it.second.begin(), it.second.end());
        anagrams.emplace_back(anagram);
    }

    return anagrams;
}

int main()
{
    std::vector<std::vector<std::string>> result = groupAnagrams({"eat", "tea", "tan", "ate", "nat", "bat"});
    for(const auto& v : result)
    {
        for(const std::string& str : v)
            std::cout << str << " ";
        std::cout << std::endl;
    }
}
