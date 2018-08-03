#include <iostream>
#include <vector>

//Two Sum II
std::vector<int> twoSum(const std::vector<int>& numbers, const int& target)
{
    const size_t n = numbers.size();
    for(int i = 0, j = n-1; i < j;)
        if(numbers[i] + numbers[j] < target)
            ++i;
        else if(numbers[i] + numbers[j] > target)
            --j;
        else
            return {i+1,j+1}; //indexes are not zero-based
}
int main()
{
    std::vector<int> numbers = {2,7,11,15};
    for(const int& ind : twoSum(numbers,9))
        std::cout << ind << " ";
    std::cout << std::endl;
}
