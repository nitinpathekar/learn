#include <bits/stdc++.h>
using namespace std;

void toupper(string& s){
    int i=0;
    while(i<s.size()){
        if(s[i]>='a'&&s[i]<='z'){
            s[i]=s[i]-32;
        }
        i++;
    }
}

int main(){
    string s;
    getline(cin,s);

    toupper(s);


    cout<<s;

    return 0;
}