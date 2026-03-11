/*
 * @lc app=leetcode id=111 lang=c
 *
 * [111] Minimum Depth of Binary Tree
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

int findMin(int a, int b){
    return (a<b) ? a : b;
 }


int minDepth(struct TreeNode* root) {

    if(root == NULL){
        return 0;
    }

    else if(root->left == NULL && root->right == NULL){
        return 1;
    }

    else if(root->left != NULL && root->right != NULL){
        return 1 + findMin(minDepth(root->left), minDepth(root->right));
    }

    else if(root->left == NULL ){
        return 1 + minDepth(root->right);
    }

    else{
        return 1 + minDepth(root->left);
    }
}
// @lc code=end

