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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* curr = head;
        int count = 0;
        while (curr != NULL) {
            count++;
            curr = curr->next;
        }
        if (n == count) {
            curr = head;
            head = head->next;
            delete curr;
            return head;
        }
        curr = head;
        for (int i = 1; i < count - n; i++) {
            curr = curr->next;
        }
        ListNode* temp = curr->next;
        curr->next = temp->next;
        delete temp;
        return head;
    }
};