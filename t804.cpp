#include <iostream>
#include <vector>
#include <string>
#include <unordered_set>

int uniqueMorseRepresentations(const std::vector<std::string>& words) 
{
    std::vector<std::string> alphabet = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
    std::unordered_set<std::string> uniqueMorseWords;
    for(const std::string& word : words)
    {
        std::string wordWrittenInMorse;
        for(const char& ch : word)
            wordWrittenInMorse += alphabet[ch-'a'];
        uniqueMorseWords.emplace(wordWrittenInMorse);
    }
    return uniqueMorseWords.size();
}

int main()
{
    std::cout << uniqueMorseRepresentations({"gin","zen","gig","msg"}) << '\n';
}
