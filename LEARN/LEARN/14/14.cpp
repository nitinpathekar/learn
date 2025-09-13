#include<iostream>
using namespace std;

class Stack{
  
    int* arr;
    int capacity;
    int top;
    public:
    Stack(int capacity){
        arr=new int[capacity];
        this->capacity=capacity;
        top=-1;
    }
    int peek(){
        if(top==-1){
            cout<<"Stack is empty"<<endl;
            return -1;
        }
        else{
            return arr[top+1];
        }
    }
    void push(int val){
        if(top+1==capacity){
            cout<<"Stack is overflowed or full"<<endl;
        }
        else{
            top++;
            arr[top]=val;
        }
    }
};

int main(){
    Stack st(10);
   cout<<st.peek();
    st.push(12);
    st.push(13);
    // st.push(1)1;
    cout<<st.peek();
    return 0;
}