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
    int minDepth(TreeNode* root) {
        if (root == nullptr) {
            return 0;
        }
        if (root->left == nullptr && root->right == nullptr) {
            return 1;
        }
        int lDepth = minDepth(root->left);
        int rDepth = minDepth(root->right);
        if (lDepth && rDepth) {
            return 1 + min(lDepth, rDepth);
        } else if (lDepth) {
            return 1 + lDepth;
        } else {
            return 1 + rDepth;
        }
        //return 1 + min(minDepth(root->left), minDepth(root->right));
    }
};