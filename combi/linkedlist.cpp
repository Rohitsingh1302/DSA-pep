#include <iostream>
using namespace std;
struct Node {
    int data;
    Node* next;
    Node(int value) : data(value), next(nullptr) {}
};
class LinkedList {
    Node* head = nullptr;
public:
    void insertEnd(int value) {
        Node* node = new Node(value);
        if (!head) {
            head = node;
            return;
        }
        Node* cur = head;
        while (cur->next) cur = cur->next;
        cur->next = node;
    }
    void display() const {
        for (Node* cur = head; cur; cur = cur->next) cout << cur->data << ' ';
        cout << '\n';
    }
};
int main() {
    LinkedList list;
    list.insertEnd(10);
    list.insertEnd(20);
    list.insertEnd(30);
    list.display();
    return 0;
}
