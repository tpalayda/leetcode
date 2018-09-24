#include <iostream>
#include <sstream>
#include <vector>
#include <iterator>

bool containsCharacter(const std::string& s)
{
    for(const char& ch : s)
        if(ch != ' ')
            return true;
    return false;
}
void reverseWords(std::string& s)
{
    if(!containsCharacter)
        return;
    std::istringstream iss(s);
    std::vector<std::string> words;
    std::string word;
    std::string result;

    while(iss >> word)
    {
        word += " ";
        words.emplace_back(word);
    }
    for(auto it = words.rbegin(); it != words.rend(); ++it)
        result += *it;    
    result.pop_back(); //delete last " "
    s = result;
}

int main()
{
    std::string s1 = "The sky is blue";
    std::string s2 = "";
    std::cout << s1 << std::endl;
    reverseWords(s1);
    std::cout << s1 << std::endl; //blue is sky the
    std::cout << s2 << std::endl; //blue is sky the
    reverseWords(s2);
    std::cout << s2 << std::endl; //blue is sky the
}
