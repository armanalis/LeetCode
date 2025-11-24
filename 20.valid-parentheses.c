/*
 * @lc app=leetcode id=20 lang=c
 *
 * [20] Valid Parentheses
 */

// @lc code=start
#include <string.h>
bool isValid(char* s) {
    //LAST IN FIRST OUT
    int n = strlen(s);
    char stack[n];
    int top = -1;
    for (int i = 0; i < n; i++){
        if (s[i] == '(' || s[i] == '{' || s[i] == '['){
            stack[++top] = s[i];
        }
        else {
            if (top == -1) return false;    
            char last = stack[top--];
            int diff = s[i] - last;
            if (diff != 1 && diff != 2){
                return false;
            }
        }
    }
    return top == -1;
}
// @lc code=end

