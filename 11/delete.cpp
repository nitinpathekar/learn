#include<iostream>

using namespace std;

void printbybacktrack(int n){
    if(n==0){
        return;
    }    
    printbybacktrack(--n);
    cout<<"this is backtrack"<<n+1<<endl;
    return;
}

// int sum=0;
int sumofN(int n){
    static int sum=0;
    if(n==1){
        return 1;
    }
    sum=sumofN(n-1)+n;
    return sum;
}





int main(){
    cout<<sumofN(1)<<endl;
    cout<<sumofN(2)<<endl;
    cout<<sumofN(3)<<endl;
    cout<<sumofN(4)<<endl;
}