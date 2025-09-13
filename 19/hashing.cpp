#include<iostream>
using namespace std;


int count(int hash[], int data)
{
    return hash[data];
}



int main(){
    int arr[]={1,1,2,2,4,45,54,56,54,454,45,44,44,4,564,44,4,999,5,45};
    int n=sizeof(arr)/sizeof(int);
    int hash[1000]={0};

    for(int i=0;i<n;i++){

        hash[arr[i]]++;
        

    }
    cout<<count(hash,54);

    return 0;
}