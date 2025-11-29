/*
 * @lc app=leetcode id=704 lang=c
 *
 * [704] Binary Search
 */

// @lc code=start
int search(int* nums, int numsSize, int target) {
    int low = 0;
    int high = numsSize -1;
    while(low <= high){
        int mid = (high + low)/2;
        if(target < nums[mid]){
            high = mid-1;
        }
        else if(target > nums[mid]){
            low = mid+1;
        }
        else{
            return mid;
        }
    }
    return -1;
}
// @lc code=end

