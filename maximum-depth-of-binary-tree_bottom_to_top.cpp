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
    // int finder(TreeNode* root,int answ) {
    //     if (root == nullptr) {
            
    //         return 0;
    //     }
        
    
    //     finder(root->left, answ);
    //     finder(root->right, answ);
    //     answ++;
    //     //answ = max(finder(root->left, answ + 1),finder(root->right, answ + 1));
    //     return answ;
    // }


    int maxDepth(TreeNode* root, int answ = 0) {
        if (root == nullptr) {
            
             return 0;
         }
        
        // answ = finder(root, answ);

        
        return max(maxDepth(root->left, answ), maxDepth(root->right, answ)) + 1;
    }
};
