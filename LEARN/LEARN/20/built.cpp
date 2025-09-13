#include<iostream>
#include<vector>
using namespace std;

class heap{
    vector<int> heap;
    int parent(int i){return (i-1)/2;}

    void heapifypush(int i){
        while(i>0&&heap[parent(i)]<heap[i]){
            swap(heap[parent(i)],heap[i]);
            i=parent(i);
        }
    }
    public:
    void push(int val){
        heap.push_back(val);
        heapifypush(heap.size()-1);
    };
    int top(){
        return heap[0];
    }
    void print(){
        for(auto it: heap){
            cout<<it<<" ";
        }
    }
    void pop(){
        
    }

};

int main(){

    heap h;
    int val;
    while(true){
        cin>>val;
        h.push(val);
        
        h.print();
cout<<endl;
    }
    


    return 0;
}