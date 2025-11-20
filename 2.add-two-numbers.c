/*
 * @lc app=leetcode id=2 lang=c
 *
 * [2] Add Two Numbers
 The problem: 
 Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

You can return the answer in any order.

 

Example 1:

Input: nums = [2,7,11,15], target = 9
Output: [0,1]
Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].
Example 2:

Input: nums = [3,2,4], target = 6
Output: [1,2]
Example 3:

Input: nums = [3,3], target = 6
Output: [0,1]
*/

// @lc code=start
#include <stdlib.h>
/*struct ListNode {
    int val;
    struct ListNode *next;
};
*/
 
struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
    int carry = 0;
    struct ListNode* head = NULL;
    struct ListNode* current = NULL;
    while (l1 != NULL || l2 != NULL || carry > 0){
        int sum = carry;
        if (l1 != NULL){
            sum += l1->val;
            l1 = l1->next;
        }
        if (l2 != NULL){
            sum += l2->val;
            l2 = l2->next;
        }
        carry = sum / 10;
        struct ListNode* newNode = (struct ListNode*)malloc(sizeof(struct ListNode));
        newNode->val = sum % 10;
        newNode->next = NULL;
        if (head == NULL){
            head = newNode;
            current = newNode;
        } 
        else {
            current->next = newNode;
            current = newNode;
        }
    }
    return head;
}
// @lc code=end

