struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}
};

class Solution {
public:
    bool hasCycle(ListNode *head) {
        if (head == nullptr || head->next == nullptr)
            return false;

        ListNode* slow = head;
        ListNode* fast = head;

        while (fast != nullptr && fast->next != nullptr) {
            slow = slow->next;           // 1 step
            fast = fast->next->next;     // 2 steps

            if (slow == fast)  // mil gaye → cycle
                return true;
        }

        return false;  // fast NULL ho gaya → no cycle
    }
};
