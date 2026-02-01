#include <iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(NULL) {}
};

ListNode* reverseList(ListNode* head) {
    ListNode* prev = NULL;
    ListNode* curr = head;
    
    while (curr != NULL) {
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
    /
