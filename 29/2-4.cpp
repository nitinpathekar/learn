#include<iostream>
#include<vector>
#include<set>
using namespace std;
int linearSearch(vector<int>nums,int key){
    for(int i=0;i<nums.size();i++){
        if(nums[i]==key){
            return i;
        }
    }
}

int main(){

    vector<int> nums;
    nums={
        1,24,5845,41564,54,51,16445,445,456,4564,564,564,564,564,564,566
    };
    int key;
    while(true){
        cin>>key;
        cout<<endl<<linearSearch(nums,key );
    }
    return 0; 
}