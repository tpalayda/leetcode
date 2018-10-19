#include <iostream>
#include <algorithm>
#include <vector>

// 923. 3Sum With Multiplicity
// Given an integer array A, and an integer target, return the number of tuples i, j, k  such that i < j < k and A[i] + A[j] + A[k] == target.
unsigned threeSumMulti(std::vector<int> A, const int& target)
{
    std::sort(A.begin(), A.end());
    unsigned counter = 0;

    for(unsigned i = 0; i < A.size(); ++i)
    {
        int head = i + 1;
        int tail = A.size() - 1;
        while(head < tail)
        {
            int currentSum = A[head] + A[tail] + A[i];
            if(currentSum > target)
                --tail; 
            else if(currentSum < target)
                ++head;
            else
            {
                int temp1 = A[head];
                int temp2 = A[tail];
                while(head < tail && A[head] == temp1)
                    ++head, ++counter;
                while(tail > head && A[tail] == temp2)
                    --tail, ++counter;
            }
        }
        while(i < A.size() - 1 && A[i+1] == A[i])
            ++i, ++counter;
    }
    return counter;
}

int main()
{
    std::cout << threeSumMulti({1,1,2,2,3,3,4,4,5,5}, 8) << std::endl; //20
}
