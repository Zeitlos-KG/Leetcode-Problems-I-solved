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
    vector<int> preorderTraversal(TreeNode* root) {
       vector<int> result;
if(root == NULL) return result;
stack<TreeNode*> st;
st.push(root);
while(!st.empty()){
TreeNode* p = st.top();
st.pop();
if(p->right != NULL) st.push(p->right);
if(p->left != NULL) st.push(p->left);
result.push_back(p->val);
}
return result;
    }
};
