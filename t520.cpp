#include <iostream>
#include <string>

constexpr bool isCapital(const char& ch)
{
    return ch >= 'A' && ch <= 'Z'; 
}
//Detect Capital
bool detectCapitalUse(const std::string& word)
{
    unsigned countCapitals = 0;

    for(const char& ch : word)
        if(isCapital(ch))
            ++countCapitals;
    return (countCapitals == 1 && isCapital(word[0])) || (!countCapitals) || countCapitals == word.size();
}

int main()
{
    std::cout << detectCapitalUse("FlaG") << std::endl;
    std::cout << detectCapitalUse("USA") << std::endl;
    std::cout << detectCapitalUse("aaA") << std::endl;
    std::cout << detectCapitalUse("aaa") << std::endl;
    std::cout << detectCapitalUse("Google") << std::endl;
}

