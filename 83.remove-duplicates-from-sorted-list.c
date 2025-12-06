/*
 * @lc app=leetcode id=83 lang=c
 *
 * [83] Remove Duplicates from Sorted List
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
#include <stdio.h>
struct ListNode* deleteDuplicates(struct ListNode* head) {
    int i = 0;
    struct ListNode *current = head;
    while(current != NULL && current->next != NULL){
        if(current->val == current->next->val){
            current->next = current->next->next;
        }
        else{
            current = current->next;
        }
    }
    return head;
    
}
// @lc code=end

