#include <iostream>
#include <string>

// 394. Decode String
constexpr bool isInteger(const char& c)
{
    return c > '0' && c <= '9';
}

std::string decodeString(const std::string& s)
{
    int multiplier = 0;
    std::string temp;
    std::string result;
    for(auto it = s.begin(); it != s.end();)
    {
        if(isInteger(*it))
        {
            multiplier = *it - 48;
            it += 2;
        }
        else if(*it != '[' && *it != ']')
            temp += *it++;
        else
        {
            std::cout << "end of bracket:" << temp << ',' << multiplier << std::endl;    

            for(unsigned i = 0; i < multiplier; ++i)
                result = result + temp;            
            temp = "";
            it++;
        }
        
    }
    return result;
}

int main()
{
    std::cout << decodeString("3[a]2[bc]") << std::endl; //aaabcbc
    std::cout << decodeString("3[a2[c]]") << std::endl; //accaccacc
    std::cout << decodeString("2[abc]3[cd]ef") << std::endl; //abcabccdcdcdef
}
