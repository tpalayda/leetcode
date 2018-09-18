#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
#include <unordered_set>

constexpr bool isPunctuationSymbol(const char& ch)
{
    return ch == ',' || ch == ' ' || ch == ';' || ch == '.' || ch == '?' || ch == '!' || ch == '\'';
}

constexpr char toLowCaseLetter(const char& ch)
{
    if(ch > 64 && ch < 97)
        return ch + 32;
    return ch;
}
std::pair<std::string, unsigned> maxThatNotIsBanned(const std::unordered_map<std::string, unsigned>& h, const std::vector<std::string>& banned)
{
    std::unordered_set<std::string> ban(banned.begin(), banned.end());
    std::pair<std::string, unsigned> result;

    for(const auto& it : h)
        if(!ban.count(it.first))
            if(it.second > result.second && !it.first.empty())
                result = it;
    return result;
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
            temp += toLowCaseLetter(ch);    
    if(!temp.empty())
        ++occurrences[temp];
//    for(const auto& it : occurrences)
//        std::cout << it.first << ',' << it.second << std::endl;
    return maxThatNotIsBanned(occurrences, banned).first;
}

int main()
{
    const std::vector<std::string> banned = {"hit"};
    std::cout << mostCommonWord("Bob hit a ball, the hit BALL flew far after it was hit.", banned) << std::endl;
    std::cout << mostCommonWord("Bob", {}) << std::endl;
    std::cout << mostCommonWord("Bob. hIt, baLl", {"bob", "hit"}) << std::endl;
}
