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
    ListNode* sortList(ListNode* head) {
        if(head == NULL || head->next == NULL)
            return head;
        ListNode* st = head->next, *t = head,*prev = head,*p;
        while(st != NULL)
        {
            t = head;
            while(t != st && t != NULL)
            {
                if(st->val < t->val)
                {
                    //swap
                    if(t->next == st)
                    {
                        ListNode* temp = st->next;
                        st->next = t;
                        //p->next = st;
                        prev->next = temp;
                        if(t == head)
                            head = st;
                        else
                            p->next = st;
                        st = st->next;
                    }
                    //exchange
                    else
                    {
                        //head
                        if(t == head)
                        {
                            ListNode* temp = st->next;
                            st->next = t;
                            prev->next = temp;
                            head = st;
                            st = prev;
                        }
                        //not head
                        else
                        {
                            ListNode* temp = st->next;
                            p->next = st;
                            st->next = t;
                            prev->next = temp;
                            st = prev;
                        }
                    }   
                    //reset st, reset t
                    break;
                }
                p = t;
                t = t->next;
            }
            prev = st;
            st = st->next;
        }
        return head;
    }
};
