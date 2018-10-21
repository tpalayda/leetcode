#include <iostream>
#include <unordered_map>
#include <string>

// 925. Long Pressed Name

bool isLongPressedName(const std::string& name, const std::string& typed)
{
    unsigned i = 0, j = 0;
    while(i < typed.size())
        if(j < name.size() && name[j] == typed[i])
            ++i, ++j;
        else if(j && name[j-1] == typed[i])
            ++i;
        else
            return false;
    return j == name.size();
}

int main()
{
    std::cout << isLongPressedName("alex", "aaleex") << std::endl;
    std::cout << isLongPressedName("saeed","ssaaedd") << std::endl;
    std::cout << isLongPressedName("leelee","lleeelee") << std::endl;
    std::cout << isLongPressedName("laiden","laiden") << std::endl;
}
