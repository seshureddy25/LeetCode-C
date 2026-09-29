/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* removeNthFromEnd(struct ListNode* head, int n)
{
    int count = 0;
    struct ListNode *curr = head;
    while (curr != NULL)
    {
        count++;
        curr = curr->next;
    }
    if (n == count)
    {
        curr = head;
        head = head->next;
        free(curr);
        return head;
    }
    curr = head;
    for (int i = 1; i < count - n; i++)
    {
        curr = curr->next;
    }
    struct ListNode *temp = curr->next;
    curr->next = temp->next;
    free(temp);
    return head;
}