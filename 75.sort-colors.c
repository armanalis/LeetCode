/*
 * @lc app=leetcode id=75 lang=c
 *
 * [75] Sort Colors
 */

// @lc code=start
void sortColors(int* nums, int numsSize) {
    int temp;
    int min;
    for(int i = 0; i < numsSize - 1; i++){
        min = i;
        for(int j = i + 1; j < numsSize; j++){
            if(nums[j] < nums[min]){
                min = j;
            }
        }
        if(min != i){
            temp = nums[i];
            nums[i] = nums[min];
            nums[min] = temp; 
        }
    }
}
// @lc code=end

