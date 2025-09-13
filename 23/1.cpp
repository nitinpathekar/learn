#include<iostream>
#include<vector>
using namespace std;

int binarysearch(vector<int> vec, int key,int s,int e){
    int mid=(s+e)/2;
    if (vec[mid]==key) return mid;
    else if(vec[mid]>key){
        e=mid-1;
    }
    else{
        s=mid+1;
    }
    binarysearch(vec,key,s,e);
}

int rotatedsearch(vector<int> vec, int rotateby,int key){
    int start,end,mid;
    if(vec[vec.size()-1]==key)return vec.size()-1;
    else if (vec[vec.size()-1]>key){
        end=vec.size()-1;
        start=rotateby;
    }
    else{
        start=0;
        end=rotateby-1;
    }
    return binarysearch(vec,key,start,end);
}

int main(){

    vector<int> vec={5,6,7,8,9,1,2,3,4};
    int rotateby=5;
    int key=1;

    cout<<rotatedsearch(vec,rotateby,key);
    
    
    return  0;
}