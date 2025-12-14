/*
 * @lc app=leetcode id=104 lang=c
 *
 * [104] Maximum Depth of Binary Tree
 */

// @lc code=start
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
int max(int a, int b);
int maxDepth(struct TreeNode* root) {
    if(root == NULL){
        return 0;
    }
    int left_depth = maxDepth(root->left);
    int right_depth = maxDepth(root->right);

    return max(left_depth, right_depth) + 1;// counting the root as well.
}

int max(int a, int b){
    return (a > b) ? a : b;
}
// @lc code=end

