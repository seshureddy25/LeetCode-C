/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* deleteMiddle(struct ListNode* head) {
    if(head==NULL)
    {
        return NULL;
    }
    if(head->next==NULL)
    {
        free(head);
        return NULL;
    }
    struct ListNode* slow=head;
    struct ListNode*fast=head;
    struct ListNode*prev=NULL;
    while(fast!=NULL && fast->next!=NULL)
    {
        prev=slow;
        slow=slow->next;
        fast=fast->next->next;
    }
    prev->next=slow->next;
    free(slow);
    return head;
    
}