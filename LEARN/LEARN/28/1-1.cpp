#include<iostream>
using namespace std;

void selectionSort(int*arr,int n){
    int idx;
    for(int i=0;i<n;i++){
        idx=i;
        for(int j=i+1;j<n;j++){
            if(arr[idx]>arr[j]){
                idx=j;
            }
        }
        swap(arr[i],arr[idx]);

    }
}

 int main(){

    int arr[]={4,5,61,3,45,1,44,5};
    int n=sizeof(arr)/sizeof(int);
    selectionSort(arr,n);
    
    for( int i=0;i<n;i++){
        cout<<arr[i]<< " ";
    }
    return 0;
 }