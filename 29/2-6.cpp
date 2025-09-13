// least code


// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     vector<int> nums1 = {4, 5, 556, 41, 4, 2, 4, 5, 45545, 54, 5, 45};
//     vector<int> nums2 = {4, 554, 5, 45, 456, 456, 456, 45, 56462, 123, 1, 556, 41, 4, 2, 4, 5, 45545, 54, 5, 45};
//     set<int> s(nums1.begin(), nums1.end());
//     s.insert(nums2.begin(), nums2.end());
//     for (int x : s)
//         cout << x << " ";

//     return 0;
// }

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> nums1 = {4, 5, 556, 41, 4, 2, 4, 5, 45545, 54, 5, 45};
    vector<int> nums2 = {4, 554, 5, 45, 456, 456, 456, 45, 56462, 123, 1, 556, 41, 4, 2, 4, 5, 45545, 54, 5, 45};
    vector<int> nums;

    // Sort both arrays
    sort(nums1.begin(), nums1.end());
    sort(nums2.begin(), nums2.end());

    int i = 0, j = 0;

    // Merge step
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

    // Add remaining elements
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

    // Print merged array

    i = 0;
    j = 1;
    while (j < nums.size())
    {
        if (nums[i] != nums[j])
        {
            i++;
            nums[i] = nums[j];
        }
        j++;
    }
    cout << endl;
    int p = nums.size() - 1;
    while ((nums.size() - 2) != i)
    {
        nums.pop_back();
    }
    nums.pop_back();
    // for(int k=0;k<=i;k++){
    //     cout<<nums[k]<<" ";
    // }

    for (auto it : nums)
    {
        cout << it << " ";
    }
    return 0;
}
