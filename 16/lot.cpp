#include<iostream>
#include<queue>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;

    // constructor using initializer list (best way)
    Node(int data1)
    {
        data = data1;
        left = NULL;
        right = NULL;
    }
};

void pushLeft(Node *parent, int data)
{
    if(parent->left==NULL){
        parent->left=new Node(data) ;
        cout<<"sucessfully pushed on left node : "<<data<<endl;
    }
    else{
        cout<<"already haven a left child "<<data<<endl;
    }

}
void pushright(Node* parent, int data){
    
    if(parent->right==NULL){
        
        parent->right= new Node(data) ;
        cout<<"sucessfully pushed on left node : "<<data<<endl;
    }
    else{
        cout<<"already haven a rt child "<<data<<endl;
    }

}

void lot(Node* root){
    queue<Node*> q;
    Node*currNode;
    q.push(root);
    while(!q.empty()){
        currNode=q.front();
        q.pop();
        cout<<currNode->data<<" ";
        if(currNode->left!=NULL) q.push(currNode->left);
        if(currNode->right!=NULL) q.push(currNode->right);

        
    } 
    
}

int main(){
    Node* root=new Node(0);

    pushLeft(root,47);
    pushright(root,59);
    pushLeft(root->left,4);
    pushright(root->left,44);
    pushLeft(root->right,4);
    pushright(root->right,41);

    lot(root);


    return 0;
}