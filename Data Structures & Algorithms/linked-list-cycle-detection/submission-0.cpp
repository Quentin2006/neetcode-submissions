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
        vector <ListNode*> traversed;

        ListNode * cur = head;

        // iterate through list
        while (cur) {
            // checks if node has already been traversed
            for (int i = 0; i < traversed.size(); ++i)
                if (traversed[i] == cur) 
                    return true;

            traversed.push_back(cur);
            cur = cur -> next;
        }

        return false;
    }
};
