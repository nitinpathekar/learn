#include<bits/stdc++.h>
using namespace std;

int Power(int a,int b){
    if(b==1)
    return a;
    return a*Power(a,b-1);
}
int main(){
    int a=5;    
    int b=3;
    cout<<Power(a,b);
}