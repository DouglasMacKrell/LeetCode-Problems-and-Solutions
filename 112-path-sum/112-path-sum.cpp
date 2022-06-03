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
    bool hasPathSum(TreeNode* root, int targetSum) {
        return dfs(root, targetSum, 0);
    }
    
    bool dfs(TreeNode* node, int target, int acc) {
        if (!node) {
            return false;
        }
        acc += node->val;
        if(node->left == nullptr && node->right == nullptr){
            return acc == target;
        }
        return dfs(node->left, target, acc) || dfs(node->right, target, acc);
    }
};