#include <iostream>
#include <string>

int strStr(const std::string& haystack, const std::string& needle)
{
    if(needle.empty())
        return 0;
    if(needle.size() > haystack.size())
        return -1;
    for(unsigned i = 0; i < haystack.size(); ++i)
        if(haystack[i] == needle[0]) //found first letter
        {
            std::string temp;
            for(unsigned j = i; j < haystack.size(); ++j)
            {
                temp += haystack[j];
                if(temp.size() > needle.size())
                    break;
                if(temp == needle)
                    return i;
            }
        }
    return -1;
}

int main()
{
    std::cout << strStr("hello","ll") << std::endl;
    std::cout << strStr("aaaaaaaaaaaaa","bba") << std::endl;
}
