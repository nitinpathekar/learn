// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;

//  int optimal(vector<int> arr){
//     int largest=INT8_MIN;
//     int sec=INT8_MIN;


//    for(auto it: arr){
//     if(it>largest){
//         sec=largest;
//         largest=it;
//     }
//    }
//     return sec;
//  }

// int main(){

//     vector<int> nums={2,5,4,55,2,34,83,5,4,0};
//     sort(nums.begin(),nums.end());
//     int n=nums.size();
//     int i=n-1;
//     // int seclargest=INT8_MIN;
//     // do{
//     //     if(nums[n-1]!=nums[i]){
//     //         seclargest=nums[i];
//     //         break;
//     //     }
        
//     //     i--;

//     // }while(true);
//     // cout<<seclargest;
    
//     cout<<optimal(nums);

//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;

int optimal(vector<int> arr) {
    int largest = INT_MIN;
    int sec = INT_MIN;

    for (int num : arr) {
        if (num > largest) {
            sec = largest;
            largest = num;
        } else if (num > sec && num < largest) {
            sec = num;
        }
    }

    return (sec == INT_MIN ? -1 : sec); // return -1 if no second largest exists
}

int main() {
    vector<int> arr = {10, 20, 4, 45, 99, 99};
    cout << "Second largest: " << optimal(arr) << endl;
}
