#include <iostream>
#include <vector>

//Binary Search
int search(const std::vector<int>& nums, const int& target)
{
    int l = 0;
    int r = nums.size() - 1;
    while(l <= r)
    {
        int m = (l + r) / 2; //may overflow
        if(nums[m] > target)
            r = m - 1;
        else if(nums[m] < target)
            l = m + 1;
        else
            return m;
    }
    return -1;
}

int main()
{
    std::cout << search({-1,0,3,5,9,12},9) << std::endl;
    std::cout << search({-1,0,3,5,9,12},2) << std::endl;
    std::cout << search({5},5) << std::endl;
}
