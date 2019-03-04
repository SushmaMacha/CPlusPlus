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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        static int count = 0;
        ListNode* prev =  head, *node;
        static ListNode* h = head;
        if(head == NULL)
            return NULL;
        node = removeNthFromEnd(head->next,n);
        count++;
        if(prev == h && count == n)
        {
            printf("%d ", head->val);
            head = node;
        }
        else if(count == n+1)
        {
            //delete node
            prev->next = node->next;
        }
        return head;
        
    }
};
