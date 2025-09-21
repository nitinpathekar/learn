#include<bits/stdc++.h>
using namespace std;

int bsearch(int * arr, int st, int ed, int key){

    if(st>ed){return -1;}
    int mid=(st+ed)/2;
    if(arr[mid]==key) return mid;
    if(arr[mid]>key) return bsearch(arr,st,mid-1,key); 
    if(arr[mid]<key) return bsearch(arr,mid+1,ed,key); 
   
}

int main(){
    int arr[]={1,12,45,78,123,456,789};

   cout<< bsearch(arr,0,6,45);

    return 0;
}