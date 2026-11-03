struct node {
    int data;
    node * next;
};

class MinStack {
public:
    MinStack() {
        head = nullptr;
    }
    
    void push(int val) {
        node * add = new node;
        add -> data = val;
        add -> next = head;
        head = add;
    }
    
    void pop() {
        if (!head) return;
        node * hold = head -> next;
        delete head;
        head = hold;
    }
    
    int top() {
        if (!head) return 0;
        return head -> data;
    }
    
    int getMin() {
        int min = pow(2, 31)-1;
        node * cur = head;
        while (cur) {
            if (min > cur -> data)
                min = cur -> data;
            cur = cur -> next;
        }
        return min;
    }

private:
    node * head;
};
