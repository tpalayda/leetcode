#include <iostream>
#include <string>

bool rotateString(const std::string& A, const std::string& B)
{
    if(A.empty() && B.empty())
        return true;
    if(A.empty() && !B.empty() || !A.empty() && B.empty())
        return false;

    const char first_character = A[0];
    auto it = B.begin();

    while(*it++ != first_character)
        if(it == B.end())
            return false;
    it -= 1;

    std::string temp;
    temp += *it;
    for(auto it2 = it+1; it2 != it; ++it2)
    {
        if(it2 == B.end())
        {
            it2 = B.begin();
            if(it2 == it)
                break;
        }
        temp += *it2;
    }
    return temp == A;
}

int main()
{
    std::cout << rotateString("","") << std::endl;
}
