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
    bool hasCycle(ListNode* head) {
        if (!head) return 0;

        ListNode * slow = head;
        ListNode * fast = head;
        // iterate through list
        while (fast && slow) {
            // checks if we have fast
            if (!fast -> next) return false;
            fast = fast -> next;
            if (!fast -> next) return false;
            if (fast == slow) return true;

            slow = slow -> next;
            fast = fast -> next;
        }

        return false;
    }
};
