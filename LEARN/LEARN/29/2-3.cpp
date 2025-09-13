// class Solution {
// public:
//     bool check(vector<int>& nums) {

//         for(int i=1;i<nums.size()-1;i++){
//             if(nums[i-1]>nums[i]) return false;
//         }
//         return true;
        
        
//     }
// };
//check if array is sorted

#include <bits/stdc++.h>
using namespace std;

bool check(vector<int>& nums) {
    int n = nums.size();
    int count = 0;

    for (int i = 0; i < n; i++) {
        if (nums[i] > nums[(i + 1) % n]) {
            count++;
        }
        if (count > 1) return false; // More than 1 drop => not valid
    }

    return true;
}

int main() {
    vector<int> nums1 = {3,4,5,1,2};
    vector<int> nums2 = {2,1,3,4};
    cout << check(nums1) << endl; // Output: 1 (true)
    cout << check(nums2) << endl; // Output: 0 (false)
}
