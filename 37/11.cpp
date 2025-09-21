#include <bits/stdc++.h>
using namespace std;
vector<int> merge(vector<int> &nums1, vector<int> &nums2)
{
    int i = 0, j = 0;
    vector<int> nums;
    while (i < nums1.size() && j < nums2.size())
    {
        if (nums1[i] <= nums2[j])
        {
            nums.push_back(nums1[i]);
            i++;
        }
        else
        {
            nums.push_back(nums2[j]);
            j++;
        }
    }
    while (i < nums1.size())
    {
        nums.push_back(nums1[i]);
        i++;
    }
    while (j < nums2.size())
    {
        nums.push_back(nums2[j]);
        j++;
    }
    return nums;
}
double findMedianSortedArrays(vector<int> &nums1, vector<int> &nums2)
{

    vector<int> nums = merge(nums1, nums2);

    if (nums.size() % 2 == 1)
        return nums[nums.size() / 2];
    return ((double)(nums[nums.size() / 2] + nums[(nums.size() / 2) - 1])) / 2.0;
}

int main(){
    vector<int> nums1={1,2,3,4,5,6,8,8,9,44};
    vector<int> nums2={1,2,33,43,53,63,83,83,93,443};
    cout<<findMedianSortedArrays(nums1,nums2);

    return 0;
}