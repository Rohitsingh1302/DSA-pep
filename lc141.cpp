#include <iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(nullptr) {}
};

bool hasCycle(ListNode *head) {
    if (!head) return false;

    ListNode* slow = head;
    ListNode* fast = head;

    while (fast && fast->next) {
        slow = slow->next;          // move 1 step
        fast = fast->next->next;    // move 2 steps
        if (slow == fast) return true;
    }
    return false;
}

int main() {
    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);

    // Create cycle: 3 -> 2
    head->next->next->next = head->next;

    if (hasCycle(head))
        cout << "Cycle detected";
    else
        cout << "No cycle";
}
