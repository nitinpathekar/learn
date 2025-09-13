#include <iostream>
#include <vector>
using namespace std;

int lsearch(vector<int> vec, int val)
{
    int count = 0;
    for (auto itr : vec)
    {
        if (itr == val)
        return count;
        count++;
    }
}

int main()
{

    vector<int> vec = {12, 45, 67, 89, 23, 56, 78, 34, 90, 11,
                       65, 72, 48, 53, 84, 29, 37, 96, 41, 55,
                       88, 19, 62, 75, 31, 47, 68, 94, 22, 39,
                       81, 26, 59, 70, 13, 44, 97, 28, 64, 85,
                       32, 71, 52, 99, 27, 38, 60, 73, 14, 92};
    while (true)
    {

        int val;
        cout << "what you want to search: ";
        cin >> val;
        cout << lsearch(vec, val)<<endl;

    }

    return 0;
}