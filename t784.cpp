#include <iostream>
#include <iterator>
#include <string>
#include <vector>

//Letter Case Permutation

std::vector<std::string> letterCasePermutation(const std::string& s)
{
    return {"","dsds","aaaa"}; 
}

int main()
{
    std::vector<std::string> v = letterCasePermutation("a1b2");
    std::copy(v.begin(), v.end(), std::ostream_iterator<std::string>(std::cout, " "));
}
