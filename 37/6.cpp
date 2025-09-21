#include<bits/stdc++.h>
using namespace std;

int lsearch(int*arr,int size,int key){
    if(size==0) return -1;
    if(arr[size-1]==key) return size-1;
    lsearch(arr,size-1,key);
}

int main(){

    int arr[]={1,2,4,5,4,564,54564,545,6456};
    cout<<lsearch(arr,9,545);

    return 0;
}