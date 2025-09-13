#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
// void sort(int *arr,int n){
//     for(int i=1;i<n-1;i++){
//         for(int j=0;i<n-1-i;j++){
//             if(arr[j]>arr[j+1]){
//                 swap(arr[j],arr[j+1]);
//             }
//         }
//     }
// }
// // void largestel(int *arr, int n){
// //     sort(arr,n);
// // }

int better(vector<int> &arr, int n){
    int largest=arr[0];
    for(int i=0;i<n;i++){
        if(largest<arr[i]) largest=arr[i];
    }
    return  largest;
}

int main(){
    vector<int> nums={4,5,69,4,22,2,45,64,0,6,41};
    // largestel(arr,11);
    // sort(nums.begin(),nums.end());
    // cout<<nums.back();

    cout<<better(nums,11);
    return 0;
}