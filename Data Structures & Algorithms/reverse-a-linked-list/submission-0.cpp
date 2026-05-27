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
        if(!head)
        {
            return 0;
        }
        
            ListNode* Newhead=head;
            if(head->next)
            {
                Newhead=reverseList(head->next);
                head->next->next=head;
            }
            head->next=nullptr;
        
        return Newhead;
    }
};
