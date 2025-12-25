/*
 * @lc app=leetcode id=110 lang=c
 *
 * [110] Balanced Binary Tree
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
#include <stdbool.h>

int checkheight(struct TreeNode* root);
bool isBalanced(struct TreeNode* root) {
    if(checkheight(root) == -1){
        return false;
    }
    else{
        return true;
    }
}

int checkheight(struct TreeNode* node){
    if(node == NULL){
        return 0;
    }
    int lheight = checkheight(node->left);
    if(lheight == -1){
        return -1;
    }

    int rheight = checkheight(node->right);
    if(rheight == -1){
        return -1;
    }
    int maxH = (lheight > rheight) ? lheight : rheight;
    if(lheight - rheight > 1 || rheight - lheight > 1){
        return -1;
    }
    else{
        return 1 + maxH;
    }

}
// @lc code=end

