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
    ListNode* reverseBetween(ListNode* head, int m, int n) {
        static ListNode* first, *last, *p;
        static int count = 0,t = n;
        count++;
        if(t == 0 || t == 1)
            return head;
        if(m == 0 || m == 1)
            first = head;
        else if(count == m-1)
            first = head;
        if(n == 1)
        {
            first->next = head;
            last = head->next;
            return head;
        }
        if(head->next != NULL)
            p = reverseBetween(head->next,m,--n);
        if(n <= (t-m) )
        {
            head->next->next = head;
            head->next = last;
        }
        return head;
    }
};
