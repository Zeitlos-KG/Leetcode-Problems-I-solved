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
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        TreeNode* curr = root;
        int x = p->val;
        int y = q->val;
        while (true) {
            int z = curr->val;
            if ((x <= z && y >= z) || (x >= z && y <= z))
                return curr;
            else if (x <= z && y <= z)
                curr = curr->left;
            else
                curr = curr->right;
        }
        return curr;
    }
};
