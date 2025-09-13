#include<iostream>
#include<vector>
using namespace std;
bool issorted(vector<int> &vec){
    for (int i=0;i<vec.size()-2;i++){
        if(vec[i]>vec[i+1]) return false;
        
    }
    return true;
}

int main(){
    vector<int> nums={1,2,45,54,78};
    vector<int> nums1={1,2,45,54,78,45,46,4};
    cout<<issorted(nums)<<endl;
    cout<<issorted(nums1)<<endl;

    
    return  0;
}