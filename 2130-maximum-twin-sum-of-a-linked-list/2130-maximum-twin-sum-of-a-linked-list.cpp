/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    int pairSum(ListNode* head) {
        int max=0;
        ListNode *slow=head;
        ListNode *fast=head;
        while(fast!=NULL&&fast->next!=NULL)
        {
            slow=slow->next;
            fast=fast->next->next;
        }
        ListNode *curr=slow;
        ListNode *prev=NULL;
        while(curr!=NULL)
        {
            ListNode *nextnode=curr->next;
            curr->next=prev;
            prev=curr;
            curr=nextnode;
        }
        ListNode *temp=head;
        ListNode *temp1=prev;
        while(temp1!=NULL)
        {
            int sum=temp->val+temp1->val;
            if(sum>max)
                max=sum;
            temp=temp->next;
            temp1=temp1->next;
        }
        return max;
    }
};