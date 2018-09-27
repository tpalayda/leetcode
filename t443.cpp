#include <iostream>
#include <iterator>
#include <vector>

// 443. String Compression
/*
Input:
['a','a','b','b','c','c','c']

Output:
Return 6, and the first 6 characters of the input array should be: ['a','2','b','2','c','3']

Explanation:
'aa' is replaced by 'a2'. 'bb' is replaced by 'b2'. 'ccc' is replaced by 'c3'.
*/
size_t compress(std::vector<char>& chars)
{
    unsigned counter = 0;
    for(auto it = chars.begin(); it != chars.end(); )
    {
        auto nextIt = it + 1;
        if(nextIt != chars.end() && *it == *nextIt)
        {
            it = chars.erase(it);
            counter += 2;
        }
        else if(counter)
        {
            std::cout << counter << std::endl;
            counter = 0;
        }
        else
            ++it;
    }
    std::copy(chars.begin(), chars.end(), std::ostream_iterator<char>(std::cout, ""));
    std::cout << std::endl;
    return chars.size();
}

int main()
{
    std::vector<char> inp0 = {'a','a','b','b','c','c','c'}; 
    std::vector<char> inp1 = {'a','b','b','b','b','b','b','b','b','b','b','b','b'}; 
    std::vector<char> inp2 = {'a'};
    std::cout << compress(inp0) << std::endl; //6
//    std::cout << compress(inp1) << std::endl; //4
//    std::cout << compress(inp2) << std::endl; //1
}
