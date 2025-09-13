#include <iostream>
using namespace std;

class Stack
{
    int arr[5];
    int top;

public:
    Stack()
    {
        top = -1;
    }
    bool isEmpty()
    {
        if(top==-1) return true;
        return false;
    }
    void push(int val)
    {
        if (top == 4){
            cout << "Stack is overflow! can't push:" << val << endl;
            return;
        }
        arr[++top] = val;
        cout << "Value " << val << " is pushed into the stack." << endl;
    }
    void peek()
    {
        if (isEmpty()){
            cout << "Stack is Empty." << endl;
            return ;
        }
        cout << arr[top] <<" is on the top of the stack."<<endl;
    }
    void pop(){
        if(top==-1) {
            cout<<"Stack is underflow! Nothing to pop."<<endl;
            return;
        }
        cout<<arr[top--]<<" popped from the stack.";
    }
};

int main()
{
    Stack first;
    cout<<first.isEmpty()<<endl;
    first.peek();
    bool ask;
    cout<<"Do you want to push the element in the stack? "<<endl;
    cin>>ask;
    if(ask ==true){
        int val;
        cout<<"Enter the value you want to push: ";
        cin>>val;
        first.push(val);
        ask= 0;
    }
    cout<<"Do you again want to display top element of stack?"<<endl;
    cin>>ask;
    if(ask){
        first.peek();
    }


    return 0;
}