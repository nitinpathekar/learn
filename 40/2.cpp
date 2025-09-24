#include<bits/stdc++.h>
using namespace std;

void delmid(stack<int>&st, vector<int> vec,int size){
    if(size==st.size()-1){
        st.pop();
        return;
    }
    int temp=st.top();
    vec.push_back(st.top());
    st.pop();
    delmid(st,vec,size);
    st.push(temp);
}

int main(){
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    st.push(5);
    
    vector<int> vec;
    int size=st.size()/2;
    delmid(st,vec,size);
    
    stack<int> temp=st;
    while(!temp.empty()){
        cout<<temp.top();
        temp.pop();

    }
    return 0;
}