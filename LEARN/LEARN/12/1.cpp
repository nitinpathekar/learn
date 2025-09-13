#include<iostream>

using namespace std;
int count=0;
int print(int till){
    if(till==count){
        return 0;
    }

    count++;
    cout<<count<<" ";
    print(till);
}

int main(){
    print(5);
    return 0;
}