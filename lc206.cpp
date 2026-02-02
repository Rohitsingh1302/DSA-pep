#include <iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(nullptr) {}
};

ListNode* reverseList(ListNode* head) {
    ListNode* prev = nullptr;
    ListNode* curr = head;
    
    while (curr != nullptr) {
        ListNode* nextNode = curr->next; // store next
        curr->next = prev;               // reverse link
        prev = curr;                     // move prev
        curr = nextNode;                 // move curr
    }
    return prev;
}

// Helper to print list
void printList(ListNode* head) {
    while (head) {
        cout << head->val << " ";
        head = head->next;
    }
}

int main() {
    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);
    head->next->next->next->next = new ListNode(5);

    cout << "Original list: ";
    printList(head);

    ListNode* reversedHead = reverseList(head);

    cout << "\nReversed list: ";
    printList(reversedHead);

    return 0;
}
