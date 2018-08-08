#include <iostream>
#include <vector>
#include <iterator>

//Merge Sorted Array
void merge(std::vector<int>& nums1, int m, std::vector<int>& nums2, int n)
{
    while(m > 0 && n > 0)
        if(nums1[m-1] >= nums2[n-1])
            nums1[m+n-1] = nums1[m---1];
        else
            nums1[m+n-1] = nums2[n---1];
    if(n > 0)
        for(int i = n-1; i >=0; --i)
            nums1[i] = nums2[i];
}
int main()
{
    std::vector<int> nums1 = {1,2,3,0,0,0,0};
    std::vector<int> nums2 = {2,4,6};
    merge(nums1,3,nums2,3);
    std::copy(nums1.begin(),nums1.end(),std::ostream_iterator<int>(std::cout," "));
    std::cout << "\n";
}
