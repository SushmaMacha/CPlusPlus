/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        //if the values are not the same
        //if one of them hits null when the other doesnt
        //In-Order traversal left root right
        TreeNode* x = p, *y = q;
        static bool r = true;
        //check for null
        if(p == NULL && q == NULL)
            return true;
        if(r == false)
            return false;
        if((p == NULL && q != NULL) || (p != NULL && q == NULL))
            return false;
        if((p->val != q->val))
            return false;
        r = isSameTree(p->left, q->left);
        if(r == false)
            return false;
        r = isSameTree(p->right,q->right);
        if(!r)
            return false;
        return true;
        
    }
};
