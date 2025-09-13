#include<iostream>
#include<stack>
#include<string>
using namespace std;

void reverseString(string* str, int n){
    stack<char> temp;
    for(int i=0;i<n;i++){
        temp.push(((*str)[i]));
    }
    for(int i=0;i<n;i++){
        (*str)[i]=temp.top();
        temp.pop();
    }
}
void displayString(string* str, int n){
    for(int i=0;i<n;i++){
        cout<<(*str)[i];
    }
}

int main(){

    string str="Nitin";
    cout<<"String before reverse: ";
    displayString(&str,str.size());
    cout<<endl;
    reverseString(&str, str.size());
    cout<<"String after reverse: ";
    displayString(&str,str.size());
    return 0;
}