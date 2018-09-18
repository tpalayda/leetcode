#include <iostream>
#include <string>
#include <algorithm>

bool backspaceCompare(const std::string& s, const std::string& t)
{
    std::string first_string;
    std::string second_string;
    
    for(auto it = s.begin(); it != s.end(); ++it)
        if(*it == '#' && !first_string.empty())
            first_string.pop_back();
        else if(*it != '#')
            first_string += *it;

    for(auto it = t.begin(); it != t.end(); ++it)
        if(*it == '#' && !second_string.empty())
            second_string.pop_back();
        else if(*it != '#')
            second_string += *it;

    return second_string == first_string;
}
int main()
{
    std::cout << backspaceCompare("ab#c","ad#c") << std::endl;
    std::cout << backspaceCompare("ab##","a#d#") << std::endl;
    std::cout << backspaceCompare("a##c","#a#c") << std::endl;
    std::cout << backspaceCompare("a#c","b") << std::endl;
}
