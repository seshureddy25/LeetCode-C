/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
int pairSum(struct ListNode* head) {
    struct ListNode*slow=head;
    struct ListNode*fast=head;
    while(fast!=NULL && fast->next!=NULL)
    {
        slow=slow->next;
        fast=fast->next->next;
    }
    struct ListNode*curr=slow;
    struct ListNode *prev=NULL;
    while(curr!=NULL)
    {
        struct ListNode*next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }
    struct ListNode*temp=head;
    struct ListNode *temp2=prev;
    int max=0;
    while(temp2!=NULL)
    {
        int sum=temp->val+temp2->val;
        if(sum>max)
            max=sum;
        temp=temp->next;
        temp2=temp2->next;
    }
    return max;
}