#include <iostream>
#include <string>
#include <vector>

std::string convert(const std::string& s, const unsigned& rows_num)
{
    if(rows_num == 1)
        return s;
    const size_t length = s.size();
    std::string result;
    
    unsigned n = 2 * rows_num - 2;
    for(unsigned i = 0; i < rows_num; ++i)
        for(unsigned j = 0; j+i < length; j += n)
        {
            result += s[j+i];
            if(i && i != rows_num-1 && j + n - i < length)
                result += s[j+n-i];
        }
        
    return result;
}
int main()
{
    std::cout << convert("PAYPALISHIRING",4) << std::endl;
}
