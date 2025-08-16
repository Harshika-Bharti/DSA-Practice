/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode *prev = nullptr; 
        ListNode *next_val; //store next node before changing the links (prev = null  1->2->3->4->null)
        ListNode *temp = head; //temp stores head 
        while(temp != nullptr)
        {
            next_val = temp->next; //store head->next in next_val so it won't be lost after reversing the link (next_val = 2)
            temp->next = prev; //reverse the links. in first iteration, head points to null. (null<-1  2->3->4->null)
            prev = temp; //moving the prev one node ahead to continue the reversing (prev = 1)
            temp = next_val; // (temp = 2->3->4->null)
        }
        head = prev; //after last iteration when temp reaches null, prev will point to the last node, that becomes 1st after reversing 
        return head;
    }
};