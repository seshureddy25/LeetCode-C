/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* middleNode(struct ListNode* head) {
    struct ListNode*temp=head;
    int count=0;
    while(temp!=NULL)
    {
        count++;
        temp=temp->next;

    }
    int i=0;
    temp=head;
    while(i<count/2)
    {
        temp=temp->next;
        i++;
    }
    struct ListNode*n=malloc(sizeof(struct ListNode));
    n=temp;
    return n;
}