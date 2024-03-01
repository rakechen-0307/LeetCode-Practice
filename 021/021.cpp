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
class Solution
{
public:
    ListNode *mergeTwoLists(ListNode *list1, ListNode *list2)
    {
        if (list1 == nullptr)
        {
            return list2;
        }
        if (list2 == nullptr)
        {
            return list1;
        }

        ListNode *result = new ListNode(-1);
        ListNode *p = result;
        while (list1 != nullptr && list2 != nullptr)
        {
            if (list1->val <= list2->val)
            {
                p->next = new ListNode(list1->val);
                p = p->next;
                list1 = list1->next;
            }
            else
            {
                p->next = new ListNode(list2->val);
                p = p->next;
                list2 = list2->next;
            }
        }

        while (list1 != nullptr)
        {
            p->next = new ListNode(list1->val);
            p = p->next;
            list1 = list1->next;
        }
        while (list2 != nullptr)
        {
            p->next = new ListNode(list2->val);
            p = p->next;
            list2 = list2->next;
        }

        return result->next;
    }
};