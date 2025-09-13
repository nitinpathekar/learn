// Node* deleteValue(Node* head,int val){
//     Node*temp=head;
//     Node*prev=nullptr;
//     while(temp){
//         if(temp->data==val){
//             prev->next=prev->next->next;
//             delete temp;
//             return head;
//         }
//         prev=temp;
//         temp=temp->next;
//     }
//     return head;
// }
#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node(int data1, Node *next1 = nullptr)
    {
        this->data = data1;
        this->next = next1;
    }
};
int search(Node *head, int key)
{
    int index = 0;
    Node *temp = head;
    while (temp != nullptr)
    {
        if (temp->data == key)
        {
            return index;
        }
        index++;
        temp = temp->next;
    }
}

Node *deletehead(Node *head)
{
    Node *temp = head;
    head = head->next;
    delete (temp);
    return head;
}
void print(Node *head)
{
    Node *temp = head;
    while (temp != nullptr)
    {
        cout << temp->data << " " << endl;
        temp = temp->next;
    }
}

void deletetail(Node *head)
{
    if (head == nullptr || head->next == nullptr)
    {
        return;
    }
    Node *temp = head;
    while (temp->next->next != nullptr)
    {
        temp = temp->next;
    }
    free(temp->next);
    temp->next = nullptr;
}

Node*remove(Node*head,int k){
    if(head==nullptr){
        return nullptr;
        
    }
}

Node*deletelem(Node*head,int val){
    Node*temp=head;
    Node*prev=nullptr;
    while(temp){
        if(temp->data==val){
            prev->next=prev->next->next;
            delete temp;
            return head;
        }

        prev=temp;
        temp=temp->next;
        
    }
    
}




int main()
{
    int arr[] = {2, 0, 1, 5};
    Node *head = new Node(arr[0], nullptr);
    Node *mover = head;

    for (int i = 1; i < 4; i++)
    {
        Node *temp = new Node(arr[i], nullptr);
        mover->next = temp;
        mover = temp;
    }

    // Node *temp = head;

    // int count = 0;
    // while (temp)
    // {
    //     count++;
    //     temp = temp->next;
    // }
    // cout << count;

    // cout<<search(head,5);
    // cout<<deletehead(head)->data;
    // cout<<deletehead(head)->data;

    // deletetail(head);
    // print(head);

deletelem(head,0);
print(head);
    return 0;
}