#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

public:
    Node(int val)
    {
        data = val;
        next = nullptr;
    }
};

class ll
{
    Node *head;

public:
    ll()
    {
        head = nullptr;
    }
    void insertNode(int val)
    {
        Node *newNode = new Node(val);
        if (head == nullptr)
        {
            head = newNode;
            return;
        }
        Node *temp = head;
        while (temp->next != nullptr)
        {

            temp = temp->next;
        }
        temp->next = newNode;
    }
};

int main()
{
    Node *head = new Node(0);
    Node *cNode = head;

    bool isTrue = true;
    while(isTrue){

    }

    while (cNode != nullptr)
    {
        cout << cNode->data << " ";
        cNode = cNode->next;
    }

    return 0;
}