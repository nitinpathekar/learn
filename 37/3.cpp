#include<bits/stdc++.h>

using namespace std;

void sayDigit(int num){
    if(num==0) return ;
    string nums[]={"zero","one","two","Three","four","five","six","seven","eight","nine"};
    int digit=num%10;
    num/=10;
    sayDigit(num);
    cout<<nums[digit]<<" ";

}

int main(){
    int n;
    cin>>n;

    sayDigit(n);
    return 0;
}