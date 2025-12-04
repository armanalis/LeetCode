/*
 * @lc app=leetcode id=70 lang=c
 *
 * [70] Climbing Stairs
 */

// @lc code=start
int climbStairs(int n) {
    int sum= 0;
    int arr[n+1];
    if(n == 0 || n == 1 || n == 2){
        return n;
    }
    else{
        arr[1] = 1;
        arr[2] = 2;
        for(int i = 3; i <= n; i++){
            arr[i] = arr[i-1]+ arr[i-2];
        }
        return arr[n];
    }
}
// @lc code=end

