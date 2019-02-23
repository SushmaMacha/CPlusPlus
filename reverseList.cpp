/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* node = head, *nxt,  *prev;
        if(head == NULL)
            return head;
        nxt = node->next;
        prev = node;
        while(nxt != NULL)
        {
            node = nxt->next;
            nxt->next = prev;
            if(prev == head)
                prev->next = NULL;
            if(node == NULL)
                head = nxt;
            prev = nxt;
            nxt = node;
        }
        return head;
    }
};
