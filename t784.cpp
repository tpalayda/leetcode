#include <iostream>
#include <iterator>
#include <string>
#include <vector>

//Letter Case Permutation
void backtracking(std::string s, const size_t& i, std::vector<std::string>& result)
{
    if(i == s.size())
    {
        result.emplace_back(s);
        return;
    }
    backtracking(s, i + 1, result);
    if(isalpha(s[i]))
    {
        s[i] ^= (1 << 5);
        backtracking(s, i + 1, result);
    }
}

std::vector<std::string> letterCasePermutation(const std::string& s)
{
    std::vector<std::string> result;

    backtracking(s, 0, result);

    return result;
}

int main()
{
    std::vector<std::string> v = letterCasePermutation("a1b2");
    std::copy(v.begin(), v.end(), std::ostream_iterator<std::string>(std::cout, " "));
}
