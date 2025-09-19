#include <bits/stdc++.h>
using namespace std;

void swap(char *ch1,char *ch2){

    char temp=*ch1;
    *ch1=*ch2;
    *ch2=temp;
}
void reverse(string& s){
    int i=0;
    int j=s.size()-1;

    while(i<j){
        swap(&s[i],&s[j]);
        i++;j--;
    }
}

int main(){
    string s;
    getline(cin,s);

 reverse(s);
 cout<<s;
    return 0;
}