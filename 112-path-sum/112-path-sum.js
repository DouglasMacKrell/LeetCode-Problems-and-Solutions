/**
 * Definition for a binary tree node.
 * function TreeNode(val, left, right) {
 *     this.val = (val===undefined ? 0 : val)
 *     this.left = (left===undefined ? null : left)
 *     this.right = (right===undefined ? null : right)
 * }
 */
/**
 * @param {TreeNode} root
 * @param {number} targetSum
 * @return {boolean}
 */
var hasPathSum = function(root, targetSum) {
    return dfs(root, targetSum, 0);
};

function dfs(node, target, acc) {
    if (!node) {
        return false;
    }
    acc += node.val;
    if(node.left == null && node.right == null){
        return acc == target;
    }
    return dfs(node.left, target, acc) || dfs(node.right, target, acc);
}