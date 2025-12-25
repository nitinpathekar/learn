//Indexing and memory layout

//Indexing in array start with 0 then +1,+1,+1 its mean 0,1,2,3,4,.....

//memory layout: In memory, if any array initialise it story data in contigous memory. In simple words, if array initialise at 1000 at memory and size of every datatype in an array is 4 then next will be store in +4, then +4,+4,+4.... i.e 1000->004->1008->1012->........


#include<iostream>
using namespace std;

int main(){
    int arr[10];
    cout<<"this is the address of arr[0] in memory:"<<arr<<endl;
    cout<<"this is the address of arr[1] in memory:"<<arr+1<<endl;
    cout<<"this is the address of arr[2] in memory:"<<arr+2<<endl;
    return 0;
}