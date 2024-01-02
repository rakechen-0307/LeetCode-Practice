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
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
    {
        ListNode *head = new ListNode(-1);
        ListNode *ptr = head;
        int carrier = 0;

        while ((l1 != nullptr) && (l2 != nullptr))
        {
            ListNode *new_node = new ListNode((l1->val + l2->val + carrier) % 10);
            carrier = (l1->val + l2->val + carrier) / 10;
            ptr->next = new_node;
            ptr = ptr->next;
            l1 = l1->next;
            l2 = l2->next;
        }

        if (l1 != nullptr)
        {
            while (l1 != nullptr)
            {
                ListNode *new_node = new ListNode((l1->val + carrier) % 10);
                carrier = (l1->val + carrier) / 10;
                ptr->next = new_node;
                ptr = ptr->next;
                l1 = l1->next;
            }
        }

        else if (l2 != nullptr)
        {
            while (l2 != nullptr)
            {
                ListNode *new_node = new ListNode((l2->val + carrier) % 10);
                carrier = (l2->val + carrier) / 10;
                ptr->next = new_node;
                ptr = ptr->next;
                l2 = l2->next;
            }
        }

        if (carrier == 1)
        {
            ListNode *new_node = new ListNode(carrier);
            ptr->next = new_node;
            ptr = ptr->next;
        }

        return (head->next);
    }
};