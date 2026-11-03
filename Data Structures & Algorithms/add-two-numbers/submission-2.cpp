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
        // have 2 strings for s1 and s2
        string s1;
        string s2;

        // go thgouh each list, appending char to list,
        ListNode* cur1 = l1;
        ListNode* cur2 = l2;
        while (cur1 || cur2) {
            if (cur1) {
                s1 += to_string(cur1 -> val);
                cur1 = cur1 -> next;
            }
            if (cur2) {
                s2 += to_string(cur2 -> val);
                cur2 = cur2 -> next;
            }
        }


        // reverse strings
        reverse(s1.begin(), s1.end());
        reverse(s2.begin(), s2.end());

        // add s1 and s2 as ints together, add to sum str
        string sum = to_string(stoi(s1) + stoi(s2));
        reverse(sum.begin(), sum.end());
        cout << sum;

        ListNode * head = new ListNode;
        // make list out of sum str
        ListNode * cur = head;
        for (int i = 0; i < sum.length(); ++i) {
            cur -> val = sum[i] - '0';
            if (i == sum.length() - 1)
                cur -> next = nullptr;
            else
                cur -> next = new ListNode;
            cur = cur -> next;

        }

        return head;
    }
};
