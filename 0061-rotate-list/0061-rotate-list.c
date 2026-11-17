/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* rotateRight(struct ListNode* head, int k) {
    if(head==NULL||head->next==NULL || k==0)
        return head;
    struct ListNode* temp=head;
    int count=1;
    while(temp->next!=NULL){
        temp=temp->next;
        count++;
    }
    k=k%count;
    if(k==0)
        return head;
    temp->next=head;
    struct ListNode*curr=head;
    int step=count-k;
    for(int i=1;i<step;i++)
    {
        curr=curr->next;
    }
    struct ListNode* newhead=curr->next;
    curr->next=NULL;
    return newhead;
  
}