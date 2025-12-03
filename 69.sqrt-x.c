/*
 * @lc app=leetcode id=69 lang=c
 *
 * [69] Sqrt(x)
 */

// @lc code=start
int mySqrt(int x) {
    int low = 0;
    int mid;
    int high = x;
    int ans;
    while(low <= high){
        mid = (low + high)/2;
        if((long long)mid * mid == x){
            return mid;
        }
        else if((long long)mid * mid > x){
            high = mid - 1;
        }
        else{
            ans = mid;
            low = mid + 1;
        }
    }
    return ans;
}
// @lc code=end

