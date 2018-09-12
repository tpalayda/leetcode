#include <iostream>
#include <string>
#include <vector>
#include <unordered_set>

bool buddyStrings(const std::string& A, const std::string& B)
{
    if(A.size() != B.size())
        return false;
    if(A == B && std::unordered_set<char>(A.begin(), A.end()).size() < A.size())
        return true;
    std::vector<unsigned> difference;
    for(unsigned i = 0; i < A.size(); ++i)
        if(A[i] != B[i])
            difference.emplace_back(i);
    return difference.size() == 2 && A[difference[0]] == B[difference[1]] && A[difference[1]] == B[difference[0]];
}

int main()
{
    std::cout << buddyStrings("ab","ba") << std::endl; //1
    std::cout << buddyStrings("ab","ab") << std::endl; //0
    std::cout << buddyStrings("aa","aa") << std::endl; //1
    std::cout << buddyStrings("aaaaaaabc","aaaaaaacb") << std::endl; //1
    std::cout << buddyStrings("","aa") << std::endl; //0
}
