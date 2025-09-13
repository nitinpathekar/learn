#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int binarySearch(vector<int> &vec, int val)
{
    int s = 0;
    int l = vec.size() - 1;
    int mid;
    while (s <= l)
    {
        mid = (s + l) / 2;
        if (vec[mid] == val)
            return mid;
        else if (vec[mid] > val)
            l = mid - 1;
        else
            s = mid + 1;
    }
    return -1;
}
// int binarySearch(vector<int> &vec, int val)
// {
//     int s = 0;
//     int l = vec.size() - 1;

//     while (s <= l)
//     {
//         int mid = (s + l) / 2;

//         if (vec[mid] == val)
//             return mid;
//         else if (vec[mid] > val)
//             l = mid - 1; // go left
//         else
//             s = mid + 1; // go right
//     }
//     return -1; // not found
// }11
int main(){
    vector<int> vec = {12, 45, 67, 89, 23, 56, 78, 34, 90, 11,
                       65, 72, 48, 53, 84, 29, 37, 96, 41, 55,
                       88, 19, 62, 75, 31, 47, 68, 94, 22, 39,
                       81, 26, 59, 70, 13, 44, 97, 28, 64, 85,
                       32, 71, 52, 99, 27, 38, 60, 73, 14, 92};
    sort(vec.begin(), vec.end());
    int val;
    while (true)
    {
        cout << "Enter the value you want to check index in the vector: ";
        cin >> val;
        int idx = binarySearch(vec, val);
        if (idx != -1)
            cout << "Found at index: " << idx << endl;
        else
            cout << "Not found!" << endl;
    }

    return 0;
}