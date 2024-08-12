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





    bool isSameTree(TreeNode* p, TreeNode* q) {
        if (q == nullptr || p == nullptr) {
            return q == nullptr && p == nullptr;
        }
        
        if (q->val != p->val) {
            return false;
        }
        bool a = isSameTree(q->left,p->left);
        bool b = isSameTree(q->right,p->right);
           
            return a && b;
        
    }





};
