#include <iostream>
#include <string>

// 551. Student Attendance Record I
inline bool checkRecord(const std::string& s)
{
    unsigned counterA = 0;
    unsigned counterL = 0;
    for(const char& ch : s)
    {
        if(ch == 'A')
        {
            ++counterA;
            counterL = 0;
        }
        else if(ch == 'L')
            ++counterL;
        else
            counterL = 0;
        if(counterA > 1 || counterL >2)
            return false;
    }
    return true;
}

int main()
{
    std::cout << checkRecord("PPALLP") << std::endl; //1
    std::cout << checkRecord("PPALLL") << std::endl; //0
}
