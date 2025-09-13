#include <iostream>
#include <vector>
using namespace std;


int main()
{
    vector<int> vec = {1, 2, 1245, 5, 5, 5, 4, 541, 565, 51, 56, 415, 56, 894, 8485, 558, 55};
    int right = vec.size() - 1;
    int left = 0;
    while (left < right)
    {
        swap(vec[left], vec[right]);
        left++;
        right--;
    }
    for(auto it: vec){
        cout<<it<<" ";
    }

    return 0;
}