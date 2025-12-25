#include<iostream>
using namespace std;

int main(){
    //traversing is going through the each element of data structure , we are studing array in array we can traverse it using memoizationa and tabulation i.e., by loop or by recursion


    //using for loop


    //Initialising array

    int array[]={1,2,3,4,56,7};

    int size= sizeof(array)/sizeof(int);
    for(int i=0;i<size;i++){

        // traversingg forward
        cout<<array[i]<<endl;
        // traversing backward
        cout<<array[size-i-1]<<endl;

        // traversing nested

        cout<<array[i]<<endl;
        for(int j=i;j<size;j++){
            cout<<array[j];
        }
    }
    return 0;
}