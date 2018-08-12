#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>

constexpr bool isPunctuationSymbol(const char& ch)
{
    return ch == ',' || ch == ' ' || ch == ';' || ch == '.' || ch == '?' || ch == '!' || ch == '\'';
}
std::string mostCommonWord(const std::string& paragraph, const std::vector<std::string>& banned)
{
    std::unordered_map<std::string,unsigned> occurrences;
    std::string temp;

    for(const char& ch : paragraph)
        if(isPunctuationSymbol(ch))
        {
            ++occurrences[temp];
            temp = "";
        }
        else
            temp += ch;    
    for(const auto& it : occurrences)
        std::cout << it.first << "," << it.second << std::endl;
    return "";
}

int main()
{
    const std::vector<std::string> banned = {"hit"};
    std::cout << mostCommonWord("Bob hit a ball, the hit BALL flew far after it was hit.",banned) << std::endl;
}
