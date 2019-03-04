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
    bool isPalindrome(ListNode* head) {
        static ListNode* curr = head;
        bool l;
        if(head == NULL)
            return true;
        l = isPalindrome(head->next);
        if(head->val != curr->val)
            return false;
        else
            curr = curr->next;
        return l;
    }
};
