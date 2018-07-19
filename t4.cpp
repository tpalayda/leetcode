#include <iostream>
#include <vector>

//nums1 should be smaller array 
double findMedianSortedArrays(std::vector<int> nums1,std::vector<int> nums2)
{
    size_t n = nums1.size(), m = nums2.size();
    if(n > m)
    {
        std::swap(nums1,nums2);
        n = nums1.size();
        m = nums2.size();
    }
    unsigned min_index = 0, max_index = n, i, j;
    double median;
    
    while(min_index <= max_index)
    {
        i = (min_index + max_index)/2;
        j = ((n+m+1)/2)-i;
        if(i < n && j && nums2[j-1] > nums1[i])
            min_index = i+1;
        else if(i && j < m && nums2[j] < nums1[i-1])
            max_index = i-1;
        else
        {
            if(!i)
                median = nums2[j-1];
            else if(!j)
                median = nums1[i-1];
            else
                median = std::max(nums1[i-1],nums2[j-1]);
            break;
        }
    }
    if((n+m) & 1)
        return median;
    if(i == n)
        return (median+nums2[j])/2;
    if(j == m)
        return (median+nums1[i])/2;
    return (median+std::min(nums1[i],nums2[j]))/2;
}

int main()
{
    std::vector<int> v1 = {1,3};
    std::vector<int> v2 = {2};

    std::cout << findMedianSortedArrays(v1,v2);
}
