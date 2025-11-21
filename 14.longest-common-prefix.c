/*
 * @lc app=leetcode id=14 lang=c
 *
 * [14] Longest Common Prefix
 
 The problem:
 Write a function to find the longest common prefix string amongst an array of strings.

If there is no common prefix, return an empty string "".

 

Example 1:

Input: strs = ["flower","flow","flight"]
Output: "fl"
Example 2:

Input: strs = ["dog","racecar","car"]
Output: ""
Explanation: There is no common prefix among the input strings.*/

// @lc code=start
#include <stdlib.h>
char* longestCommonPrefix(char** strs, int strsSize) {
    for (int j = 0; strs[0][j] != '\0'; j++){
        for (int i = 0; i < strsSize; i++){
            if(strs[0][j] != strs[i][j]){
                strs[0][j] = '\0';
                return strs[0];
            }
        }
    }
    return strs[0];
}
// @lc code=end

