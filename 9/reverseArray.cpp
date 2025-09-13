#include <iostream>
#include <stack>
using namespace std;
void reverseArray(int *array, int n)
{
    stack<int> temp;
    for (int i = 0; i < n; i++)
    {
        temp.push(array[i]);
    }
    for (int i = 0; i < n; i++)
    {
        array[i] = temp.top();
        temp.pop();
    }
}

void displayArray(int *array, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << array[i];
        if(i<n-1){
            cout<<" , ";

        }
    }
    cout<<endl;
}

int main()
{
    int arr[] = {1, 3, 4, 12, 5, 6, 7, 8, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "displaying array Element before array:" << endl;
    displayArray(arr, n);
    reverseArray(arr, n);
    cout << "displaying array Element after array:" << endl;
    displayArray(arr, n);

    return 0;
}