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
    std::unordered_map<char,size_t> occurrences;
    occurrences.reserve(s.size()-1);
    size_t size = 0, curr = 0;
    for(const char& character : s)
    {
        if(occurrences.count(character))
        {
            size = size < curr ? curr : size;
            occurrences.clear();
            curr = 0;
        }
        ++occurrences[character];
        ++curr;
        printMap(occurrences);
    }
    size = size < curr ? curr : size; //when no copies
    return size;
}

int main()
{
    std::cout << lengthOfLongestSubstring("dvdf") << std::endl;
}
