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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        return recursiveAddition(l1, l2, 0);
    }

    ListNode* recursiveAddition(ListNode* l1, ListNode* l2, int residual)
    {
        if (!l1 && !l2)
        {
            if (residual > 0)
            {
                return new ListNode(residual, nullptr);
            }
            else
            {
                return nullptr;
            }
        }

        int newValue = residual;

        if (l1)
        {
            newValue += l1->val;
            l1 = l1->next;
        }

        if (l2)
        {
            newValue += l2->val;
            l2 = l2->next;
        }

        if (newValue > 9)
        {
            newValue -= 10;
            residual = 1;
        }
        else
        {
            residual = 0;
        }

        return new ListNode(newValue, recursiveAddition(l1, l2, residual));
    }
};