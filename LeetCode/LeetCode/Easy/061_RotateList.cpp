class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if (!head || !head->next || k == 0) return head;

        
        int n = 1;
        ListNode* tail = head;
        while (tail->next) {
            tail = tail->next;
            n++;
        }
        tail->next = head;
        int steps = n - k % n - 1;
        ListNode* newTail = head;
        for (int i = 0; i < steps; i++)
            newTail = newTail->next;
        ListNode* newHead = newTail->next;
        newTail->next = nullptr;

        return newHead;
    }
};
