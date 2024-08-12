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
    int finder(TreeNode* root, int answ){
        if (root == nullptr) {
            
            return answ;
        }
        //answ++;
        //finder(root->left, answ);
        //finder(root->right, answ);
        // answ++;
        
        answ = max(finder(root->left, answ+1),finder(root->right, answ+1));
        
        return answ;


    }
    int everynode(TreeNode* root, int& alltimemax) {
        if (root == nullptr) {
            return alltimemax;
        }
        int answ = finder(root->left, 0)+ finder(root->right, 0);
        alltimemax = max(answ, alltimemax);
        everynode(root->left,  alltimemax),everynode(root->right,  alltimemax);
        
        
        return alltimemax;

    }


    int diameterOfBinaryTree(TreeNode* root) {
        int answ = 0;
        //cout << finder(root->left, 0) << finder(root->right, 0);
        //answ = finder(root->left, 0)+ finder(root->right, 0);
        //return answ;
        answ = everynode(root,answ);
            return answ;
    }
};
