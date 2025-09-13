// Why important?
// Used for complex data representation (e.g., nodes in linked lists).

#include<iostream>
#include<string>
using namespace std;
int count=1;

struct car{
    

    int serial=count;
    string name;
    int year;
    car(){
        count++;

    }
    
};
int main(){

    car fortuner;
    fortuner.name="fortune";
    fortuner.year= 1990;
    cout<<fortuner.serial<<endl;
    car alto;
    car enova;
    cout<<alto.serial<<endl;
    cout<<enova.serial;

    return 0;
}