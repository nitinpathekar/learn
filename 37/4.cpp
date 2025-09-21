#include<bits/stdc++.h>
using namespace std;

// bool isSort(int *arr,int n){
//     if(n==0||n==1){
//         return true;
//     }
//     if(arr[n]<arr[n-1]) return false;
//     isSort(arr,n-1);

// }


bool isSort(int* arr,int size){
    if(size==0||size==1) return true;
    if(arr[0]>arr[1]) return false;
    isSort(arr+1,size-1);
}
int main(){

    int nums[]={1,2,3};

    cout<<isSort(nums,2);

    return 0;

}