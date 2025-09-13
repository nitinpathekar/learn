#include <iostream>
using namespace std;
struct Node
{
    int data;
    Node *next;
    Node(int data, Node *next = nullptr)
    {
        this->data = data;
        this->next = next;
    }
};

class LinkedList
{
public:
    Node *head;
    LinkedList()
    {
        head = nullptr;
    }
    void insertAtHead(int data)
    {
        Node* newNode = new Node(data, head);
        head = newNode;
    }
    void display(Node* head){
        Node* name=head;
        while(name){
            cout<<name->data<<endl;
            name=name->next;
        }
    }
};

int main()
{
    LinkedList one;
    one.insertAtHead(44);
    one.insertAtHead(44);
    one.insertAtHead(44);
    one.display(one.head);

    return 0;
}