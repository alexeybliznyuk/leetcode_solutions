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
    int maxDepth(TreeNode* root) {
        int answ = 0;
        int temp_answ = 0;
        std::queue <std::pair<TreeNode*, int>> q;
        if (root != nullptr){
            //std::queue <std::pair<TreeNode*, int>> q;
        
            q.push(make_pair(root, 1));
        }

        while(!q.empty()) {
            auto [node, num] = q.front();
            q.pop();
            answ = max(answ, num);
            if (node->left != nullptr) 
                q.push(make_pair(node->left, num+1));

            if (node->right != nullptr) 
                q.push(make_pair(node->right, num+1));


             
        }


          
        return answ;
    }
};
