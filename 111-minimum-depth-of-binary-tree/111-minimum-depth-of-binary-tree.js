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
 * @return {number}
 */
var minDepth = function(root) {    
    if (root == null) {
        return 0;
    }
    root.level = 1;
    let queue = [root];
    while (queue.length > 0) {
        let currNode = queue.shift();
        
        if (currNode.left != null) {
            currNode.left.level = currNode.level + 1;
            queue.push(currNode.left);
        }
        if (currNode.right != null) {
            currNode.right.level = currNode.level + 1;
            queue.push(currNode.right);
        }
        if (currNode.left == null && currNode.right == null) {
            return currNode.level;
        } 
        
    }
    throw ("Something went wrong");
};