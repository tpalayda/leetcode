#include <iostream>
#include <vector>
#include <iterator>

//Merge Sorted Array
void merge(std::vector<int>& nums1, int m, std::vector<int>& nums2, int n)
{
    while(m > 0 && n > 0)
        nums1[m+n-1] = nums1[m-1] >= nums2[n-1] ? nums1[m---1] : nums2[n---1];
    while(n > 0)
        nums1[n-1] = nums2[n---1];
}
int main()
{
    std::vector<int> nums1 = {1,2,3,0,0,0,0};
    std::vector<int> nums2 = {1,1,1,1};
    merge(nums1,3,nums2,4);
    std::copy(nums1.begin(),nums1.end(),std::ostream_iterator<int>(std::cout," "));
    std::cout << "\n";
}
