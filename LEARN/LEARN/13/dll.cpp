#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node* back;

    // Single constructor handles all cases
    Node(int data, Node* next = nullptr, Node* back = nullptr) {
        this->data = data;
        this->next = next;
        this->back = back;
    }
};

int main() {
    Node* head = new Node(1);  // works fine now

    cout << "Head node data: " << head->data << endl;
    return 0;
}
