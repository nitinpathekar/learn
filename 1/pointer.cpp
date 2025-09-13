#include<iostream>
using namespace std;

int main(){
    int var=1 ;
    int* ptr=&var;
    int ** ptr1=&ptr;
    cout<<(int)ptr<<endl;
    cout<<*ptr<<endl;
    cout<<(int)&ptr<<endl;
    cout<<**ptr1<<endl;


    return 0;
}