//https://leetcode.com/problems/kth-smallest-element-in-a-bst/

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
    void dfs(TreeNode* root, std::vector <int>& v) {
        if (root == nullptr) {
            return;
        }
        
        dfs(root->left,v);
        v.push_back(root->val);
        dfs(root->right, v);
    }



    int kthSmallest(TreeNode* root, int k) {
        std::vector <int> v;
        
        
        dfs(root, v);

        // for (int i = 0; i != v.size(); i++) {
        //     std::cout << v[i] << std::endl;
        // }
        return v[k - 1];
    }
};
