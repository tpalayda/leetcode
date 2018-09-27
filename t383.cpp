#include <iostream>
#include <unordered_map>
#include <unordered_set>

bool canConstruct(const std::string& ransomNote, const std::string& magazine) 
{
    std::unordered_map<char, int> occurrences;
    std::unordered_set<char> string(ransomNote.begin(), ransomNote.end());    

    for(const char& ch : ransomNote)
        ++occurrences[ch];
    for(const char& ch : magazine)
        if(string.count(ch))
            --occurrences[ch];
    for(const auto& it : occurrences)
        if(it.second > 0)
            return false;
    return true;
}

int main()
{
    std::cout << canConstruct("a", "b") << std::endl;
    std::cout << canConstruct("aa", "ab") << std::endl;
    std::cout << canConstruct("aa", "aab") << std::endl;
    std::cout << canConstruct("bg", "efjbdfbdgfjhhaiigfhbaejahgfbbgbjagbddfgdiaigdadhcfcj") << std::endl;
}
