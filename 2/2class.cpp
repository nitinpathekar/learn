// Why important?
// Will be the basis for object-oriented implementation of stacks, queues, and linked lists.

#include<iostream>
#include<string>
using namespace std;

class Animal{
    public:
    string name;
    void display() {
        cout << name <<endl;
    }
};


int main(){
    Animal dog;
    dog.name="Dogesh";
    dog.display();

    return 0;
}