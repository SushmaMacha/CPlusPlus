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
    void reorderList(ListNode* head) {
        if(head->next == NULL || head->next->next == NULL || head == NULL)
            return;
        traverse(head);
        //if c_head->next == Null or c_head->next == curr return;
        
    }
    
    ListNode* traverse(ListNode* head)
    {
        static ListNode* c_head = head;
        static bool f = false;
        ListNode* t1,*t2;
        if(head->next->next == NULL)
            return head;
        t1 = traverse(head->next);
        if(c_head->next == NULL||f)
            return head;
        t2 = t1->next;
        t1->next = NULL;
        t1 = c_head->next;
        c_head->next = t2;
        t2->next = t1;
        c_head = t1;
        if(c_head == head)
            f = true;
        return head;
    }
};
