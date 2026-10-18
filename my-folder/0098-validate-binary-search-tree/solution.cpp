/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
    vector<int> inorder;
    void inorderTra(TreeNode* root) {
        if (root == NULL)
            return;
        inorderTra(root->left);
        inorder.push_back(root->val);
        inorderTra(root->right);
    }
    bool isValidBST(TreeNode* root) {
        inorderTra(root);
        vector<int> copy = inorder;
        unordered_set<int> s;
        for (auto it : inorder) {
            s.insert(it);
        }
        if (s.size() != inorder.size())
            return false;
        sort(copy.begin(), copy.end());
        if (copy == inorder)
            return true;
        else
            return false;
    }
};
