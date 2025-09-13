#include <iostream>
using namespace std;

// Traversing of array
void traverse(int *arr, int n)
{
    cout << "Traversing of array:" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << *arr + i << " " << endl;
    }
}

// Linear search of array:
int linearSearch(int *arr, int n, int key)
{
    cout << "Index of " << key << " is : " << endl;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            return i;
        }
    }
    return -1;
}

// Binary search of array
int binarySearch(int *arr, int n, int key)
{
    int start = 0, end = n - 1, mid;
    while (start <= end)
    {
        mid = start + (end - start) / 2;

        if (arr[mid] == key)
            return mid;
        else if (arr[mid] > key)
            end = mid - 1;
        else
            start = mid + 1;
    }
    return -1;
}

//Find occurence in array

int countOccur(int *arr,int n,int key){
    int count =0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==key) count++;
    }
    return count;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    int n = sizeof(arr) / sizeof(arr[0]);
    traverse(arr, n);
    cout<< "Do you want to search any key I will return Index?" << endl;
    bool ask;
    cin >> ask;
    if (ask)
    {   
        int key;
        cout << "Enter the Key: ";
        cin >> key;
        cout<<"for Linear Search input : 0\nfor Binary search input : 1"<<endl;
        int searchtech;
        cin>>searchtech;
        if(searchtech){

            cout << binarySearch(arr, n, key);
        }
        else  cout << linearSearch(arr, n, key);
    }
    cout<<"\nDo you want to count any key?";
    cin>>ask;
    int key;
    if(ask) {

        cin>>key; cout<<countOccur(arr,n,key);
    } 

    return 0;
}