#include <iostream>
#include <vector>
#include <string>
#include <iterator>

std::vector<std::string> uncommonFromSentences(const std::string& A, const std::string& B)
{
    return {"sdds","SDDS"};
}
int main()
{
    std::vector<std::string> v = uncommonFromSentences("this apple is sweet", "this apple is sour");
    std::copy(v.begin(),v.end(),std::ostream_iterator<std::string>(std::cout, " "));
}
