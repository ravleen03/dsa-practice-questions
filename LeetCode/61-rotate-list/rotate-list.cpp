class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if (head == nullptr || head->next == nullptr)
            return head;

        // Find length and tail
        int length = 1;
        ListNode* tail = head;

        while (tail->next != nullptr) {
            tail = tail->next;
            length++;
        }

        // Reduce unnecessary rotations
        k = k % length;

        if (k == 0)
            return head;

        // Make the list circular
        tail->next = head;

        // Find the (length - k)th node
        ListNode* newTail = head;

        for (int i = 1; i < length - k; i++) {
            newTail = newTail->next;
        }

        // The next node becomes the new head
        ListNode* newHead = newTail->next;

        // Break the circle
        newTail->next = nullptr;

        return newHead;
    }
};