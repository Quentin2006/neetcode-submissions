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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if (!head) return nullptr;

        // get size of list

        // # of nodes 
        int size = 0;
        ListNode * cur = head;
        while (cur) {
            ++size;
            cur = cur -> next;
        }

        cout << size;
        // if size of list < n, return nullptr;
        if (size < n || size == 1) return nullptr;

        if (size == n) {
            head = head -> next;
            return head;
        }

        // traverse list size of list - n times, dragging a prev ptr
        cur = head;
        ListNode * prev = cur;
        for (int i = 0; i < size - n; ++i) {
            cout << cur -> val << " ";
            prev = cur;
            cur = cur -> next;
        }

        // when traversed, delete cur node, set prev to cur -> next
        prev -> next = cur -> next;
        return head;
    }
};
