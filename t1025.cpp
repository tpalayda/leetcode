#include <iostream>
#include <vector>

inline bool divisorGame(const int& N)
{
    std::vector<bool> result(N+1, false);
    for(int i = 2; i <= N; ++i)
    {
        for(int j = 1; j < i; ++j)
        {
            if(i % j == 0)
            {
                if(!result[i-j])
                {
                    result[i] = true;
                    break;
                }
            }
        }
    }
    return result[N];
}

int main() 
{
    std::cout << divisorGame(2) << std::endl;
    std::cout << divisorGame(3) << std::endl;
}
