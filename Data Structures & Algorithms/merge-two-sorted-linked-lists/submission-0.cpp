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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* head = nullptr;

        ListNode* cur1 = list1;
        ListNode* cur2 = list2;

        while(cur1 || cur2) {
            if (cur1 && cur2) {
                if (cur1 -> val > cur2 -> val) {
                    // add cur2 
                    add_end(head, cur2 -> val);
                    // traverse cur 2
                    cur2 = cur2 -> next;
                }
                else {
                    // add cur1 
                    add_end(head, cur1 -> val);
                    // travers cur1
                    cur1 = cur1 -> next;
                }
            }

            else if (!cur1) {
                // add cur2
                add_end(head, cur2 -> val);
                // traverse cur2
                cur2 = cur2 -> next;
            }

            else if (!cur2) {
                // add cur1
                add_end(head, cur1 -> val);
                // traverse cur 1
                cur1 = cur1 -> next;
            }
        }

        return head;
    }

    // append val to head
    void add_end(ListNode * & head, int add) {
        if (!head) {
            head = new ListNode;
            head -> val = add;
            head -> next = nullptr;
            return;
        }
        return add_end(head->next, add);
    }
};
