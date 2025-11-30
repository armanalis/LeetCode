/*
 * @lc app=leetcode id=35 lang=c
 *
 * [35] Search Insert Position
 */

// @lc code=start
int searchInsert(int* nums, int numsSize, int target) {
    int high = numsSize -1;
    int low = 0;
    while(low <= high){
        int mid = (high + low)/2;
        if(target > nums[mid]){
            low = mid + 1;
        }
        else if(target < nums[mid]){
            high = mid - 1;
        }
        else{
            return mid;
        }
    }
    return low;
}
// @lc code=end

