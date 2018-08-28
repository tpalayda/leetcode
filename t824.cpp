#include <iostream>
#include <iterator>
#include <sstream>
#include <string>
#include <vector>

constexpr bool isVowel(const char& c)
{
    return c == 'a' || c == 'e' || c == 'i' || c =='o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U';
}
void addLetter(const unsigned& n, std::string& s)
{
    for(unsigned i = 0; i < n; ++i)
        s += 'a';
}

//Goat Latin
std::string toGoatLatin(const std::string& S)
{
    std::string result;
    std::string temp;

    std::vector<std::string> v;
    std::vector<std::string> goat;

    for(const char& ch : S)
        if(ch == ' ')
        {
            v.emplace_back(temp);
            temp = "";
        }
        else
            temp += ch;
    v.emplace_back(temp);
    temp = "";

    for(const std::string& word : v)
    {
        temp = "";
        for(const char& ch : word)
                temp += ch;
        if(isVowel(temp[0]))
            temp += "ma";
        else
        {
            const char ch = temp[0];
            temp.erase(0,1);
            temp += ch;
            temp += "ma";
        }
        goat.emplace_back(temp);
    }
    for(unsigned i = 0; i < goat.size(); ++i)
        addLetter(i+1, goat[i]);
    for(const std::string& word : goat)
    {
        result += word;
        result += ' ';
    }
    result.pop_back();
    return result;
}

int main()
{
    std::cout << toGoatLatin("I speak Goat Latin") << std::endl;
    std::cout << toGoatLatin("The quick brown fox jumped over the lazy dog") << std::endl;
}

