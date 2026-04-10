/*
 * @lc app=leetcode id=119 lang=c
 *
 * [119] Pascal's Triangle II
 */

// @lc code=start
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* getRow(int rowIndex, int* returnSize) {
    
    *returnSize =  rowIndex + 1;
    int *res = calloc(rowIndex + 1, sizeof(int));
    if(res == NULL){
        return NULL;
    }

    res[0] = 1;
    for(int i = 1; i <= rowIndex; i++){
        for(int j = i; j > 0 ; j--){
            res[j] = res[j] + res[j-1];
        }
    }

    return res;
}
// @lc code=end

