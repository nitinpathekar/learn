#include <iostream>
using namespace std;

void bubbleSort(int *arr, int n)
{

    for (int i = 0; i < n; i++)
    {
        int hasswap=0;
        for (int j = 0; j < n -1- i; j++)
        {   
            if(arr[j]>arr[j+1]){

                swap(arr[j],arr[j+1]);
                hasswap=1;
            } 

        }
        if(hasswap==0) break;
    }
}

void bubblesorts(int *arr,int n){
    for(int i=n-1;i>0;i--){
        int didswap=0;
        for(int j=0;j<=i-1;j++){
            if(arr[j]>arr[j+1]) {
                swap(arr[j],arr[j+1]);
                didswap=1;
            }
        }
        if(didswap==0) break;
    }
}

int main()
{

    int input, n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> input;
        arr[i] = input;
    }
    // bubbleSort(arr, n);
    // for (int i = 0; i < n; i++)
    // {
    //     cout << arr[i] << " ";
    // }

    bubblesorts(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}