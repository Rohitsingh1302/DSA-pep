#include <iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(NULL) {}
};

ListNode* deleteDuplicates(ListNode* head) {
    ListNode* curr = head;
    
    while (curr && curr->next) {
        if (curr->val == curr->next->val) {
            ListNode* temp = curr->next;
            curr->next = curr->next->next;
            delete temp;  // free memory
        } else {
            curr = curr->next;
        }
    }
    return head;
}

void printList(ListNode* head) {
    while (head) {
        cout << head->val << " ";
        head = head->next;
    }
}

int main() {
    // Example: 1 -> 1 -> 2 -> 3 -> 3
    ListNode* head = new ListNode(1);
    head->next = new ListNode(1);
    head->next->next = new ListNode(2);
    head->next->next->next = new ListNode(3);
    head->next->next->next->next = new ListNode(3);

    head = deleteDuplicates(head);

    cout << "After removing duplicates: ";
    printList(head);

    return 0;
}
