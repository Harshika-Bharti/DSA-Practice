/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    void deleteNode(ListNode* node) {
        ListNode *temp = node;
        node->val = node->next->val; //copy the next node value in the given node
        temp = temp->next; //then move to the next node of the given node
        node->next = temp->next; // then delete the next node whose value is already copied in the node
    }
};