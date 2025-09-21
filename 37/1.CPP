#include <iostream>
using namespace std;

int main()
{

    int arr[] = {1, 5, 45, 45, 45, 456, 156, 1561, 56};

    for(int i=0;i+1<sizeof(arr)/sizeof(int);i+=2){
        
        int temp=arr[i];
        arr[i]=arr[i+1];
        arr[i+1]=temp;

    }
    for(int i=0;i<sizeof(arr)/sizeof(int);i++){
        cout<<arr[i]<<endl;
    }

    return 0;
}