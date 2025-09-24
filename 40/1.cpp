#include<bits/stdc++.h>
using namespace std;

int main(){
    stack<int> st;
    int i=0;
    st.push(1);
    st.push(11);
    st.push(111);
    st.push(1111);


    vector<int> arr;
    int ssize=st.size();
    while(!(st.size()==ssize/2)){
        arr.push_back(st.top());
        st.pop();
    }
    st.pop();
    while(!arr.empty()){
        st.push(arr.back());
        arr.pop_back();
    }

    stack<int> temp=st;
    while(!temp.empty()){
       cout<< temp.top()<<endl;
        temp.pop();
    }
    return 0;
}