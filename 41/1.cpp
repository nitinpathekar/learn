#include<iostream>
using namespace std;

class Heap{
    public:
    int size=0;
    int h[100];

    void insert(int val){

        size=size+1;
        int index=size;
        h[index]=val;

        while(index>1){
            int parent=index/2;

            if(h[parent]<h[index]){
                swap(h[parent],h[index]);
                index=parent;
            }
            else{
                return;
            }
        }
    }
};

int main(){

    return 0;
}