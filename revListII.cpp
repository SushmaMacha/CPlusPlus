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
        if(head == NULL || head->next == NULL || m == n)
            return head;
        //start from m till n, store n and m
        int count = 1;
        ListNode* nxt = head->next, *prev = head, *first = NULL, *curr = head;
        while(nxt != NULL)
        {
           ListNode* temp;
           if(count == m-1)
               first = prev; 
           else if(count == m)
               curr = prev;
           if(count >= m && count < n)
           {
               temp = nxt->next;
               nxt->next =  prev;
              // prev->next = NULL;
               prev = nxt;
               nxt = temp;
           }
           else
           {
               prev = nxt;
               nxt = nxt->next;            
           }
           if(count == n-1)
           {
               curr->next = nxt;
               if(first != NULL)
                    first->next = prev;
               else
                    head = prev;
               break;
           }
           count++;
        }
        return head;
    }
};
