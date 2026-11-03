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
        if (!head) return nullptr;

        ListNode * result = nullptr;

        reverseList(head, result);

        return result;
    }

    void reverseList(ListNode* head, ListNode *& rev) {
        if (!head) return;

        ListNode * temp = new ListNode;
        temp -> val = head -> val;
        temp -> next = rev;

        rev = temp;

        reverseList(head -> next, rev);
    }

};
