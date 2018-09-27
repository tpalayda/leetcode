#include <iostream>
#include <unordered_map>
#include <unordered_set>

bool canConstruct(const std::string& ransomNote, const std::string& magazine) 
{
    std::unordered_map<char, int> occurrences;

    for(const char& ch : magazine)
        ++occurrences[ch];
    for(const char& ch : ransomNote)
        if(--occurrences[ch] < 0)
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
