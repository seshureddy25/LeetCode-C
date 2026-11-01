class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int left, int right) {

        if(head == NULL || left == right)
            return head;
        ListNode* dummy = new ListNode(0);
        dummy->next = head;
        ListNode* prev = dummy;

        // Move prev to the node before left
        for(int i = 1; i < left; i++)
        {
            prev = prev->next;
        }

        ListNode* curr = prev->next;

        // Reverse the required portion
        for(int i = 0; i < right - left; i++)
        {
            ListNode* nextNode = curr->next;

            curr->next = nextNode->next;
            nextNode->next = prev->next;
            prev->next = nextNode;
        }

        return dummy->next;
    }
};