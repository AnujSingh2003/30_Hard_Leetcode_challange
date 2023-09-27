class Solution {
public:
    ListNode* partition(ListNode* head, int x) {
        ListNode* small = new ListNode(0);
        ListNode* large = new ListNode(0);
        ListNode* smallHead = small;
        ListNode* largeHead = large;

        while (head) {
            if (head->val < x) {
                smallHead->next = head;
                smallHead = smallHead->next;
            } else {
                largeHead->next = head;
                largeHead = largeHead->next;
            }
            head = head->next; 
        }

        // Terminate the lists
        largeHead->next = nullptr;
        smallHead->next = large->next;

        return small->next;
    }
};
