/*
 * @lc app=leetcode id=94 lang=c
 *
 * [94] Binary Tree Inorder Traversal
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
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */

 void inorderHelper(struct TreeNode* node, int **result_ptr, int *size, int *capacity);
 
int* inorderTraversal(struct TreeNode* root, int* returnSize) {
    int capacity = 10;
    int* result = (int *)malloc(capacity * sizeof(int));
    int size = 0;

    inorderHelper(root, &result, &size, &capacity);
    
    *returnSize = size;
    return result;
}
void inorderHelper(struct TreeNode* node, int **result_ptr, int*size, int*capacity){
    if(node == NULL)
        return;

    inorderHelper(node->left, result_ptr, size, capacity);

    if(*size == *capacity){
        *capacity *= 2;
        *result_ptr = (int*)realloc(*result_ptr, *capacity * sizeof(int));
    }

    (*result_ptr)[*size] = node->val;
    (*size)++;
    
    inorderHelper(node->right, result_ptr, size, capacity);
}
// @lc code=end

