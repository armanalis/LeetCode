/*
 * @lc app=leetcode id=9 lang=c
 *
 * [9] Palindrome Number
 */

// @lc code=start
bool isPalindrome(int x) {
    if(x<0 || (x%10==0 && x!=0)){
        return false;
    }
    int reversedHalf = 0;
    while (x>reversedHalf){
        reversedHalf = reversedHalf * 10 + x %10;
        x = x/10;
    }
    return x == reversedHalf || x == reversedHalf/10;
}

// @lc code=end

