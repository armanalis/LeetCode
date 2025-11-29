/*
 * @lc app=leetcode id=28 lang=c
 *
 * [28] Find the Index of the First Occurrence in a String
 */

// @lc code=start
#include <string.h>
int strStr(char* haystack, char* needle) {
    int i, j;
    int L_haystack = strlen(haystack);
    int L_needle = strlen(needle);

    for(i = 0; i <= L_haystack - L_needle; i++){
        for(j = 0; j < L_needle; j++){
            if(haystack[i+j] != needle[j]){
                break;
            }
        }
        if(j == strlen(needle)){
            return i;
        }
    }
    return -1;
}
// @lc code=end

