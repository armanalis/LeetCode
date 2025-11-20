/*
 * @lc app=leetcode id=13 lang=c
 *
 * [13] Roman to Integer
 */
/*Symbol       Value
I             1
V             5
X             10
L             50
C             100
D             500
M             1000*/

// @lc code=start
int romanToInt(char* s) {
    if (*s == '\0') {
        return 0;
    }
    switch (*s)
    {
    case 'I':
        if(*(s+1) == 'V' || *(s+1) == 'X')
            return -1 +romanToInt(s + 1);
        else
            return 1 + romanToInt(s + 1);
        break;
    
    case 'V':
        return 5 + romanToInt(s + 1);
        break;
    
    case 'X':
        if(*(s+1) == 'L' || *(s+1) == 'C')
            return -10 +romanToInt(s + 1);
        else
            return 10 + romanToInt(s + 1);
        break;
    
    case 'L':
        return 50 + romanToInt(s + 1);
        break;
    
    case 'C':
        if(*(s+1) == 'D' || *(s+1) == 'M')
            return -100 +romanToInt(s + 1);
        else
            return 100 + romanToInt(s + 1);
        break;
    
    case 'D':
        return 500 + romanToInt(s + 1);
        break;
    
    case 'M':
        return 1000 + romanToInt(s + 1);
        break;
    
    default:
        break;  
    }
    return 0; // Should not be reached, but prevents compiler warnings
}
// @lc code=end

