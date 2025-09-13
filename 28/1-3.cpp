#include<iostream>
using namespace std;
void insertionSort(int* arr, int n){
    for(int i=0;i<n;i++){
        for(int j=i+1;j>0;j--){
            if(arr[j]<arr[j-1]){
                swap(arr[j],arr[j-1]);
            }
        }
    
    }
}
void insertionsort(int * arr,int n){
    for (int  i = 0; i < n; i++)
    {
        int j=i;
    while(j>0&&arr[j]<arr[j-1]){
        swap(arr[j],arr[j-1]);
        j--;
    }        /* code */
    }
    
}

int main(){
    
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    insertionsort( arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }


    return 0;
}