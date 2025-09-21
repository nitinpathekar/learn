#include <bits/stdc++.h>
using namespace std;
int sumNums(int
                *arr,
            int size)

{
    if (size == 0)
        return arr[size];

    return arr[0] + sumNums(arr + 1, size - 1);
}

int main()
{
    int arr[] = {1, 2, 3};

    cout << sumNums(arr, 2);

    return 0;
}