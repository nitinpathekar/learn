#include <iostream>
using namespace std;

// class Node
// {
//     public:
//     int data;
//     Node *left;
//     Node *right;
//     public:
//     Node(int data1)
//     {
//         data = data1;
//         left = NULL;
//         right = NULL;
//     }
// };

#include <iostream>
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

void preorder(Node*parent){
    if(parent==NULL){
        return;

    }
    cout<<" "<<parent->data;
    preorder(parent->left);
    preorder(parent ->right);

    
}

void inorder(Node*parent){
    if(parent==NULL){
        return;

    }
   
    inorder(parent->left);
     cout<<" "<<parent->data;
    inorder(parent ->right);

    
}

void postorder(Node*parent){
    if(parent==NULL){
        return;

    }
    
    postorder(parent->left);
    postorder(parent ->right);
    cout<<" "<<parent->data;

    
}



int main()
{
    int val;
    cout << "Enter the data for Node: ";
    cin >> val;

    Node *root = new Node(val);
    cout << "Value of data in root Node: " << root->data << endl;

    cout << "Value of left in root Node: " << root->left << endl;

    cout << "Value of right in root Node: " << root->right << endl;

    pushLeft(root,47);
    pushright(root,59);
    pushLeft(root->left,4);
    pushright(root->left,44);
    pushLeft(root->right,4);
    pushright(root->right,41);
    preorder(root);
    cout<<endl;
    inorder(root);
    cout<<endl;
    postorder(root);



    return 0;
}

// int main()
// {
//     int val;
//     cout<<"Enter the data for Node : "<<endl;
//     cin>>val;
//     Node* root= new Node(val);

//     cout<<"Value of data in root Node: "<<root->data<<endl;
//     cout<<"Value of left in root Node: "<<(int)root->left<<endl;
//     cout<<"Value of rightt in root Node: "<<(int)root->right<<endl;

//     return 0;
// }