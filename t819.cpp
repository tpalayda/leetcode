#include <iostream>
#include <sstream>
#include <vector>
#include <string>
#include <unordered_map>
#include <unordered_set>

std::string mostCommonWord(std::string paragraph, const std::vector<std::string>& banned)
{
    std::unordered_map<std::string,unsigned> occurrences;
    std::unordered_set<std::string> isBanned(banned.begin(), banned.end());
    for(char& ch : paragraph)
        ch = isalpha(ch) ? tolower(ch) : ' ';

    std::istringstream iss(paragraph);
    std::string word;
    std::pair<std::string, unsigned> result;

    while(iss >> word)
        if(!isBanned.count(word) && ++occurrences[word] > result.second)
            result = {word, occurrences[word]};
    return result.first;
}

int main()
{
    const std::vector<std::string> banned = {"hit"};
    std::cout << mostCommonWord("Bob hit a ball, the hit BALL flew far after it was hit.", banned) << std::endl;
    std::cout << mostCommonWord("Bob", {}) << std::endl;
    std::cout << mostCommonWord("Bob. hIt, baLl", {"bob", "hit"}) << std::endl;
    std::cout << mostCommonWord("a, a, a, a, b,b,b,c, c", {"a"}) << std::endl;
}
