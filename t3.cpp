#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>

template<typename T,typename T1>
void printMap(const std::unordered_map<T,T1>& m)
{
    for(const auto& el : m)
        std::cout << el.first << "," << el.second << " ";
    std::cout << std::endl;
}
size_t lengthOfLongestSubstring(const std::string& s)
{
    std::unordered_map<char,size_t> occurrences; //character/index
    occurrences.reserve(s.size()-1);
    
    size_t size = 0, i = 0, j = 0;

    for(const char& character : s)
    {
        if(occurrences.count(character))
            i = std::max(occurrences[character],i);

        size = std::max(size,j - i + 1);
        occurrences[character] = ++j;
        std::cout << i << "," << j << "," << character <<  std::endl;
    }
    return size;
}

int main()
{
    std::cout << lengthOfLongestSubstring("abcdvdi") << std::endl;
}
