#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 2, 4, 56, 78, 9, 1, 2, 4, 78, 9};
    // for (int i = 0; i < sizeof(arr) / sizeof(int); i++)
    // {
    //     bool twice = false;
    //     for (int j = i + 1; j < sizeof(arr) / sizeof(int); j++)
    //     {
    //         if (arr[i] == arr[j])
    //         {
    //             twice = true;
                
    //         }
    //     }
    //     if (!twice){
    //         cout << arr[i];
    //         break;
    //     }
    // }
    int unique=arr[0];
     for (int i = 1; i < sizeof(arr) / sizeof(int); i++){
        unique^=arr[i];
     }
     cout<<unique;

    

    return 0;
}