#include <iostream>
#include <vector>
using namespace std;

void reverse(vector<int> &arr, int s, int e)
{
    while (s < e)
    {
        swap(arr[s], arr[e]);
        s++;
        e--;
    }
}

void rotate(vector<int> &arr, int k)
{
    k=k%arr.size();
    reverse(arr, 0, arr.size() );
    reverse(arr, 0, k );
    reverse(arr, k , arr.size() );
}
void print(vector<int> arr)
{
    for (auto itr : arr)
    {
        cout << itr << " ";
    }
}

int main()
{

    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    rotate(arr, 4575646);
    print(arr);
    cout<<arr[arr.size()-1];

    return 0;
}