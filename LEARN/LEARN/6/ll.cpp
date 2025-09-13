#include <iostream>
using namespace std;

// Node structure
struct Node {
    int data;
    Node* next;
    Node(int val, Node* next=nullptr) {
        this->data = val;
        this->next = next;
    }
};

// Linked List class
class LinkedList {
public:
    Node* head;

    LinkedList() : head(nullptr) {}

    // ===== Stage 1 =====
    void insertAtHead(int data) {
        Node* newNode = new Node(data, head);
        head = newNode;
    }

    void insertAtTail(int data) {
        Node* newNode = new Node(data);
        if (!head) {
            head = newNode;
            return;
        }
        Node* temp = head;
        while (temp->next) temp = temp->next;
        temp->next = newNode;
    }

    void printList() {
        Node* temp = head;
        while (temp) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL\n";
    }

    // ===== Stage 2 =====
    void deleteHead() {
        if (!head) return;
        Node* temp = head;
        head = head->next;
        delete temp;
    }

    void deleteTail() {
        if (!head) return;
        if (!head->next) { // only 1 node
            delete head;
            head = nullptr;
            return;
        }
        Node* temp = head;
        while (temp->next->next) temp = temp->next;
        delete temp->next;
        temp->next = nullptr;
    }

    void deleteByValue(int data) {
        if (!head) return;
        if (head->data == data) {
            deleteHead();
            return;
        }
        Node* temp = head;
        while (temp->next && temp->next->data != data) temp = temp->next;
        if (temp->next) {
            Node* delNode = temp->next;
            temp->next = temp->next->next;
            delete delNode;
        }
    }

    bool search(int data) {
        Node* temp = head;
        while (temp) {
            if (temp->data == data) return true;
            temp = temp->next;
        }
        return false;
    }

    int searchIndex(int data) {
        int index = 0;
        Node* temp = head;
        while (temp) {
            if (temp->data == data) return index;
            temp = temp->next;
            index++;
        }
        return -1; // not found
    }

    // ===== Stage 3 =====
    void insertAfterValue(int target, int data) {
        Node* temp = head;
        while (temp && temp->data != target) temp = temp->next;
        if (temp) {
            Node* newNode = new Node(data, temp->next);
            temp->next = newNode;
        }
    }

    int length() {
        int count = 0;
        Node* temp = head;
        while (temp) {
            count++;
            temp = temp->next;
        }
        return count;
    }

    void reverseIterative() {
        Node* prev = nullptr;
        Node* curr = head;
        while (curr) {
            Node* nextNode = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nextNode;
        }
        head = prev;
    }

    Node* reverseRecursiveHelper(Node* node) {
        if (!node || !node->next) return node;
        Node* newHead = reverseRecursiveHelper(node->next);
        node->next->next = node;
        node->next = nullptr;
        return newHead;
    }

    void reverseRecursive() {
        head = reverseRecursiveHelper(head);
    }

    Node* findMiddle() {
        if (!head) return nullptr;
        Node* slow = head;
        Node* fast = head;
        while (fast && fast->next) {
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
    }

    bool detectLoop() {
        Node* slow = head;
        Node* fast = head;
        while (fast && fast->next) {
            slow = slow->next;
            fast = fast->next->next;
            if (slow == fast) return true;
        }
        return false;
    }

    void removeLoop() {
        if (!head || !head->next) return;
        Node* slow = head;
        Node* fast = head;

        // Detect loop
        bool hasLoop = false;
        while (fast && fast->next) {
            slow = slow->next;
            fast = fast->next->next;
            if (slow == fast) {
                hasLoop = true;
                break;
            }
        }

        if (!hasLoop) return;

        // Remove loop
        slow = head;
        while (slow->next != fast->next) {
            slow = slow->next;
            fast = fast->next;
        }
        fast->next = nullptr;
    }
};

int main() {
    LinkedList ll;

    // Stage 1
    ll.insertAtHead(10);
    ll.insertAtTail(20);
    ll.insertAtTail(30);
    ll.insertAtHead(5);
    ll.printList(); // 5 -> 10 -> 20 -> 30 -> NULL

    // Stage 2
    ll.deleteByValue(20);
    ll.printList(); // 5 -> 10 -> 30 -> NULL
    cout << "Search 30: " << (ll.search(30) ? "Found" : "Not Found") << "\n";

    // Stage 3
    ll.reverseIterative();
    ll.printList(); // 30 -> 10 -> 5 -> NULL
    cout << "Middle: " << ll.findMiddle()->data << "\n";

    return 0;
}
