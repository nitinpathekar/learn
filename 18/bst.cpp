#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int val)
    {
        data = val;
        left = right = NULL;
    }
};
Node *insert(Node *cnode, int *arr, int i)
{

    if (cnode == NULL)
    {
        cnode = new Node(arr[i]);
    }
    else if (cnode->data > arr[i])
    {
        cnode->left = insert(cnode->left, arr, i);
    }
    else if (cnode->data < arr[i])
    {
        cnode->right = insert(cnode->right, arr, i);
    }
    return cnode;
}
void inorder(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

bool search(Node *root, int val)
{
    if (root == NULL)
    {
        return false;
    }
    else if (root->data == val)
    {
        return true;

    }
    else if(root->data>val){
        search(root->left,val);
    }
    else if(root->data<val){
        search(root->right,val);

}
}

int main()
{
    int arr[] = {5, 1, 14, 13, 6, 18, 41, 8, 12, 3};
    Node *root = NULL;
    for (int i = 0; i < 10; i++)
    {
        root = insert(root, arr, i);
    }
    inorder(root);
   cout<<endl<< search(root,33);
}