struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}
};

class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode dummy(0);
        dummy.next = head;

        ListNode* fast = &dummy;
        ListNode* slow = &dummy;

        // Step 1: Move fast n+1 steps ahead
        for (int i = 0; i <= n; i++) {
            fast = fast->next;
        }

        // Step 2: Move both
        while (fast != nullptr) {
            fast = fast->next;
            slow = slow->next;
        }

        // Step 3: Delete node
        slow->next = slow->next->next;

        return dummy.next;
    }
};
