#include <iostream>
#include <vector>
using namespace std;

class MaxHeap {
    vector<int> heap;

    int parent(int i) { return (i - 1) / 2; }

    void heapifyUp(int i) {
        while (i > 0 && heap[parent(i)] < heap[i]) {
            swap(heap[parent(i)], heap[i]);
            i = parent(i);
        }
    }

public:
    // Only push function
    void push(int val) {
        heap.push_back(val);       // insert at end
        heapifyUp(heap.size() - 1); // fix heap
    }

    void print() {
        for (int val : heap) cout << val << " ";
        cout << endl;
    }
};

int main() {
    MaxHeap h;
    h.push(10);
    h.push(20);
    h.push(5);
    h.push(40);

    cout << "Heap after pushes: ";
    h.print();
    return 0;
}
