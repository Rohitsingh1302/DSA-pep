#include <iostream>
struct Node {
    int val;
    Node* next;
    Node(int v, Node* n = nullptr) : val(v), next(n) {}
};
Node* merge(Node* l1, Node* l2) {
    if (!l1 || !l2) return l1 ? l1 : l2;
    if (l1->val < l2->val) return l1->next = merge(l1->next, l2), l1;
    return l2->next = merge(l1, l2->next), l2;
}
void print(Node* head) {
    for (; head; head = head->next) std::cout << head->val << " ";
}
int main() {
    Node* l1 = new Node(1, new Node(3, new Node(5)));
    Node* l2 = new Node(2, new Node(4, new Node(6)));
    print(merge(l1, l2));
}
