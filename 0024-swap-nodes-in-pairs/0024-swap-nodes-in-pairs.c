struct ListNode* swapPairs(struct ListNode* head)
{
    if(head == NULL || head->next == NULL)
        return head;

    struct ListNode *first, *second, *nextPair;
    struct ListNode *prev = NULL;
    struct ListNode *newHead = NULL;

    while(head != NULL && head->next != NULL)
    {
        first = head;
        second = head->next;

        nextPair = second->next;

        second->next = first;
        first->next = nextPair;

        if(prev == NULL)
            newHead = second;
        else
            prev->next = second;

        prev = first;
        head = nextPair;
    }

    return newHead;
}