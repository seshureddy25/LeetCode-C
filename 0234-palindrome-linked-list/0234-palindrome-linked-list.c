/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
bool isPalindrome(struct ListNode* head) {
    if(head==NULL||head->next==NULL)
        return true;
    struct ListNode *slow=head;
    struct ListNode *fast=head;
    while(fast->next!=NULL&&fast->next->next!=NULL)
    {
        slow=slow->next;
        fast=fast->next->next;
    }
    struct ListNode *prev=NULL;
    struct ListNode *curr=slow->next;
    while(curr!=NULL)
    {
        struct ListNode *nextnode=curr->next;
        curr->next=prev;
        prev=curr;
        curr=nextnode;
    }
    slow=prev;
    fast=head;
    while(slow!=NULL)
    {
        if(fast->val!=slow->val)
            return false;
        slow=slow->next;
        fast=fast->next;
    }
    return true;

}