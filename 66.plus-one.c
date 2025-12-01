/*
 * @lc app=leetcode id=66 lang=c
 *
 * [66] Plus One
 */

// @lc code=start
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* plusOne(int* digits, int digitsSize, int* returnSize) {
    for (int i = digitsSize-1; i >= 0; i--){
        if(digits[i] < 9){
            digits[i] = digits[i] +1;
            int* result = (int*)(malloc(digitsSize * sizeof(int)));
            for (int j = 0; j < digitsSize; j++){
                result[j] = digits[j];
            }
            *returnSize = digitsSize;
            return result;
        }   
        else if(digits[i] == 9){
            digits[i] = 0;
        }
    }
    int* result = (int*)(malloc((digitsSize+1) * sizeof(int)));
    result[0] = 1;
    for (int k = 1; k <= digitsSize; k++){
        result[k] = 0;
    }
    *returnSize = digitsSize + 1;
    return result;
}
// @lc code=end
