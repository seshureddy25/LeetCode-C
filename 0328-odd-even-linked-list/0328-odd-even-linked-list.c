/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* oddEvenList(struct ListNode* head) {
    if(head==NULL||head->next==NULL)
        return head;
    struct ListNode*odd=head;
    struct ListNode*even=odd->next;
    struct ListNode*evenhead=even;
    while(even!=NULL&&even->next!=NULL)
    {
        odd->next=even->next;
        odd=odd->next;

        even->next=odd->next;
        even=even->next;

    }
    odd->next=evenhead;
    return head;
}