#include<iostream>
using namespace std;

class Node{
    
    public:
    int num;

    Node* left;
    Node* right;

    

    Node(int value){
        this->num=value;
        this->left=nullptr;
        this->right=nullptr;
    }

};


int main(){

    Node* root =new Node(1);

    cout<<root->num;

    




    return 0;
}