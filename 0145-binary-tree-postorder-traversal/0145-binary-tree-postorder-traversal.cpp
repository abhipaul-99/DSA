/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<int> postorderTraversal(TreeNode* root) {
    stack<TreeNode*> st;
    vector<int> postorder;
    TreeNode* cur = root;
    TreeNode* prev = nullptr;
    while (cur != nullptr || !st.empty()) {
        while (cur != nullptr) {
            st.push(cur);
            cur = cur->left;
        }
        cur = st.top();
        if (cur->right == nullptr || cur->right == prev) {
            st.pop();
            postorder.push_back(cur->val);
            prev = cur;
            cur = nullptr;
        } else {
            cur = cur->right;
        }
    }
    return postorder;
}

};