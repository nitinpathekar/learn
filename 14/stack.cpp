#include <iostream>
using namespace std;

class Stack
{
    int capacity = 10;
    int arr[10];
    int top = -1;

public:
     void peek()
    {
        if (top == -1)
        {
            cout << "Stack is Empty"<<endl;
        }
        cout<< arr[top + 1];
    }

public:
    int push(int val)
    {
        if (top == 10 - 2)
        {
            cout << "stack is overflow"<<endl;
        }
        else
        {
            arr[top + 1] = val;
        }
    }
    void pop(){
        if(top==-1){
            cout<<"stack is empty"<<endl;
        }
        else top--;
    }
};

int main()
{
    Stack st;
    // st.peek();
    st.push(1);
    // st.push(11);
    // st.push(15);
    st.peek();
    st.pop();
    st.peek();

    return 0;
}