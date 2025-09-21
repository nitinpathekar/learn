#include<bits/stdc++.h>
using namespace std;

bool ispalin(string s,int st, int end){
    if(st>end) return true;
    if(s[st]!=s[end]) return false;
   return ispalin(s,st+1,end-1);
}
int main(){

    string s="123456";
    string s1="123321";

    cout<<ispalin(s,0,s.size()-1)<<endl;
    cout<<ispalin(s1,0,s1.size()-1)<<endl;


    return 0;
}