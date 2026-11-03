/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        // copy list into new head, ignoreing ramdom ptrs;
        Node * new_head = nullptr;
        copyList(new_head, head);
        
        copyRandom(new_head, head, new_head);

        return new_head;
    }

    // copies list, ignoring random ptrs
    int copyList(Node* & dest, Node * src) {
        if (!src) {
            dest = nullptr;
            return 0;
        }

        dest = new Node(src -> val);
        copyList(dest -> next, src -> next);
        return 1;
    }

    // copies over random ptrs
    int copyRandom(Node* & dest, Node * src, Node * og) {
        if (!src)
            return 0;
        
        // if src -> random
        if (src -> random) {
            // see what src -> random -> val is
            int find = src -> random -> val;

            // go though list till we find matching val
            Node * cur = og;
            while (cur) {
                if (cur -> val == find)
                    break;
                cur = cur -> next;
            }
            // cur is now at matching node

            // set new_head's cur random ptr to mathcing val
            dest -> random = cur;
        }

        // else set ptr to nullptr
        else dest -> random = nullptr;
        copyRandom(dest -> next, src -> next, og);

        return 1;
    }

};
