#include<iostream>
#include<vector>
using namespace std;

int largestel(vector<int> vec){
    int mx=INT8_MIN;
    for(int x: vec) mx=max(x,mx);
    return mx;
}

int main(){
    vector<int> vec={0,12,6,475,41,56456,456,456,456,456,456,456,456,564,56458,465,4,45156,4,45,454,564,56};\
    cout<<"largest element of vector: "<<largestel(vec);

    return 0;
}