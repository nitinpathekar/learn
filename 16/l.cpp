#include<iostream>
using namespace std;
class Node{
    int data;
    Node*next;
    public:
    Node(int val){
        data=val;
        next=NULL;
    }
};
class List{
    Node*head;
    Node*tail;

    public:

    List(){
        head=NULL;
        tail=NULL;
    }

    void push_front(int val){
        Node* newNode=new Node(val);
       if(head=NULL){
        head=tail=NULL;
       }
       else{
        newNode->next =head;
        head=newNode;
       }

    }
};

int main(){
    List ll();
    ll.push_front(4);
     ll.push_front(5);
     ll.push_front(46);
}