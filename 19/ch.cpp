#include <iostream>
#include <string>
using namespace std;
int fetching(int*hash,char ch){
    return hash[ch];
}
int main(){
    string s;
    cin>>s;
    int hash[256]={0};
    for(int i=0;i<s.size();i++){
        hash[s[i]]++;
    }

    while(true){
        char v;
        cin>>v;
        cout<<fetching(hash,v);
    }
    return 0;
}