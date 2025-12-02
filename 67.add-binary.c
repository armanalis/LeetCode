/*
 * @lc app=leetcode id=67 lang=c
 *
 * [67] Add Binary
 */

// @lc code=start
#include <string.h>
#include <stdlib.h>
char* addBinary(char* a, char* b) {
    int carry = 0;
    int len_a = strlen(a);
    int len_b = strlen(b);
    int max = 0;
    if(len_a > len_b)
        max = len_a;
    else
        max = len_b;
    int k = max + 1;
    char* result = (char *) malloc((max + 2) * sizeof(char));
    if (result == NULL) {
        return NULL; 
    }
    int i = len_a - 1;
    int j = len_b - 1;
    result[k] = '\0';
    k--;
    while(i >= 0 || j >= 0 || carry == 1){
        int sum = carry;
        if(i >= 0){
            sum += a[i] - '0';
            i--;
        }
        if (j >= 0) {
            sum += b[j] - '0';
            j--;
        }
        result[k] = (sum % 2) + '0';
        carry = sum / 2;
        k--;
    }
    return result + k +1;
}
// @lc code=end

