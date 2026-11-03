class KthLargest {
public:
    
    KthLargest(int k, vector<int>& nums) {
        this -> k = k;

        for (int i = 0; i < nums.size(); ++i)
            pq.push(nums[i]);
    }
    
    // []

    // [3]

    int add(int val) {
        pq.push(val);

        vector <int> hold;

        // find largest
        for (int i = 0; i < k-1; ++i) {
            hold.push_back(pq.top());
            pq.pop();
        }
        int kth_largest = pq.top();

        for (int i = 0; i < k-1; ++i) {
            pq.push(hold[i]);
        }
        
        return kth_largest;
    }

private:
    priority_queue<int> pq;
    int k;
};
