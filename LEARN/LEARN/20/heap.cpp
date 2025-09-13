#include<iostream>
#include<vector>
using namespace std;
class heap{
    vector<int> vec;
    public:
    int parent(int i){
        return (i-1)/2;
    }
    int left(int i){
        return 2*i+1;
    }
    int right(int i){
        return  2*i+2;
    }
    void print(){
        for(auto it:vec){
            cout<<it<<" "; 
        }
        cout<<endl;
    }
    void heapify(int i){
        if(i==0){
            return;
        }

        
        if (vec[parent(i)]<vec[i]){
            swap(vec[parent(i)],vec[i]);
            i=parent(i);
            heapify(i);
        }

    }
    void push(int val){
        vec.push_back(val);
        heapify(vec.size()-1);
    }
    void pop(){
        swap
    }

};

int main(){
    heap hp;
    int val;
    while(true){
        cin>>val;
        hp.push(val);
        hp.print();
    }
    hp.pop();

    return  0;
}