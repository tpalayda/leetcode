#include <iostream>
#include <string>

bool rotateString(const std::string& A, const std::string& B)
{
    return A.size() == B.size() && (A+A).find(B) != std::string::npos;
}

int main()
{
    std::cout << rotateString("","") << std::endl;
}
