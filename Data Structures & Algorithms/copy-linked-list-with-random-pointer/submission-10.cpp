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
        
        copyRandom(new_head, head);

        return new_head;
    }

    // copies list, ignoring random ptrs
    int copyList(Node* & dest, Node * src) {
        if (!src) {
            dest = nullptr;
            return 0;
        }

        dest = new Node(src -> val);

        loc[src] = dest;
        copyList(dest -> next, src -> next);
        return 1;
    }

    // copies over random ptrs
    int copyRandom(Node* & dest, Node * src) {
        if (!src)
            return 0;
        
        // if src -> random
        if (src -> random) {

            // set new_head's cur random ptr to mathcing val
            dest -> random = loc[src -> random];
        }

        // else set ptr to nullptr
        else dest -> random = nullptr;
        copyRandom(dest -> next, src -> next);

        return 1;
    }
    private:
        // key: src ptr, val: new_head ptr
        unordered_map<Node* , Node*> loc;
};
