#include<iostream>
using namespace std;

void display(int* arr, int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
}

// Insertion in the begining

int insertInBegining(int *arr, int n, int value){
    // if(n>=capacity) return -1;
    for(int i=n;i>0;i--){
        arr[i]=arr[i-1];
    }
    arr[0]=value;
}

int insertAtEnd(int arr[], int n, int value) {
    arr[n] = value;
    n++;
    return 0;
}

int insertAtIndex(int arr[], int &n, int capacity, int value, int k) {
    if (n >= capacity || k < 0 || k > n) return -1;
    for (int i = n; i > k; i--) {
        arr[i] = arr[i - 1];
    }
    arr[k] = value;
    n++;
    return 0;
}

int main(){
    int arr[9]={1,2,3,12,4,5,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    
    insertInBegining(arr,n,8);
    insertAtEnd(arr,n,n);
    display(arr,n);
     for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }

    return 0; 
}