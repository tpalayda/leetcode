#include <iostream>
#include <string>
#include <unordered_map>

bool isAnagram(const std::string& s, const std::string& t)
{
    std::unordered_map<char,unsigned> occurrences_1;
    std::unordered_map<char,unsigned> occurrences_2;

    for(const auto& ch : s)
        ++occurrences_1[ch];
    for(const auto& ch : t)
        ++occurrences_2[ch];
    return occurrences_1 == occurrences_2;
}

int main()
{
    std::cout << isAnagram("car","rat") << std::endl;
}
