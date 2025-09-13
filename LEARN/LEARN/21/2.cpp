#include <iostream>
#include <vector>
using namespace std;

int slast(vector<int> vec)
{   
    int first=INT8_MIN;
    int second=INT8_MIN;
    for(auto it:vec){
        if(first<it){
            second=first;
            first=it;
        }
        else if(second<it&&first!=it){
            second=it;
        }
    }
    return second;

}

int main()
{
    vector<int> vec;
    while (true)
    {
        int val;
        cin >> val;
        vec.push_back(val);
        cout << endl
             << slast(vec);
    }
    return 0;
}