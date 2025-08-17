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
    ListNode* middleNode(ListNode* head) {
        int c = 0;
        ListNode *temp = head;
        ListNode *mid_node;
        while(temp != nullptr)
        {
            temp = temp->next;
            c++ ;
        }
        int mid = ceil(c/2);
        temp = head;
        for(int i = 0; i < mid; i++)
        {
            temp = temp->next;
        }
        return temp;
    }
};