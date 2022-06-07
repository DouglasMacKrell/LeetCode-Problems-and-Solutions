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
    TreeNode* mergeTrees(TreeNode* root1, TreeNode* root2) {
        if (root1 == nullptr && root2 == nullptr) {
            return nullptr;
        }
        int sum = nodeValue(root1) + nodeValue(root2);
        TreeNode* currNode = new TreeNode(sum);

        currNode->left = mergeTrees(childCheck(root1, "left"), childCheck(root2, "left"));
        currNode->right = mergeTrees(childCheck(root1, "right"), childCheck(root2, "right"));
        return currNode;
    }
    
    int nodeValue(TreeNode* root) {
        if(root == nullptr) {
            return 0;
        } else {
            return root->val;
        }
    }
    
    TreeNode* childCheck(TreeNode* node, string direction) {
        if (node != nullptr) {
            if (direction == "left") {
                return node->left;
            } else {
                return node->right;
            }
        } else {
            return nullptr;
        }
    }
    
};