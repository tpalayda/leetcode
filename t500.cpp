#include <iostream>
#include <vector>
#include <string>
#include <unordered_set>
#include <iterator>

std::vector<std::string> findWords(const std::vector<std::string>& words)
{
    std::unordered_set<char>  row1 = { 'q','Q','w','W','e','E','r','R','t','T','y','Y','u','U','i','I','o','O','p','P' };
    std::unordered_set<char>  row2 = { 'a','A','s','S','d','D','f','F','g','G','h','H','j','J','k','K','l','L'};
    std::unordered_set<char>  row3 = { 'z','Z','x','X','c','C','v','V','b','B','n','N','m','M'};
    std::vector<std::string> result;

    for(const std::string& word : words)
    {
        char first_letter = word[0];
        bool wasBreak = false;
        bool inRow1 = false, inRow2 = false, inRow3 = false;

        if(row1.count(first_letter))
            inRow1 = true;
        else if(row2.count(first_letter))
            inRow2 = true;
        else
            inRow3 = true;
        for(const char& ch : word)
        {
            if(inRow1 && !row1.count(ch))
            {
                wasBreak = true;
                break;
            }
            else if(inRow2 && !row2.count(ch))
            {
                wasBreak = true;
                break;
            }
            else if(inRow3 && !row3.count(ch))
            {
                wasBreak = true;
                break; 
            }
        }
        if(!wasBreak)
            result.emplace_back(word);
    }
    return result;
}

int main()
{
    //const std::vector<std::string> result = findWords({"Hello", "Alaska", "Dad", "Peace"});
    //const std::vector<std::string> result = findWords({"cccd", "a"});
    const std::vector<std::string> result = findWords({"a", "b"});
    std::copy(result.begin(), result.end(), std::ostream_iterator<std::string>(std::cout, " "));
}
