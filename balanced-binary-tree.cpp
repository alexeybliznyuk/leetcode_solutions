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
    int dfs(TreeNode* root, int depth, bool& balanceness) {
        if (root == nullptr) {
            return depth;
        }
        int l = dfs(root->left, depth+1, balanceness);
        int r = dfs(root->right, depth+1, balanceness);
        
        depth = max(l, r);
        if (max(l, r) > min(l, r) + 1) {
           balanceness = false;
        }
        
        return depth;
    }



    bool isBalanced(TreeNode* root) {
        bool balanceness = true;
        if (root != nullptr) {
            dfs(root, 0, balanceness);
            return balanceness;
        }
        else {
            return true;
        }
    }
};
