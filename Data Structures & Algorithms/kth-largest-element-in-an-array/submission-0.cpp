class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int> max_heap;

        for (int num : nums) 
            max_heap.push(num);
    
        for (int i = 0; i < k-1; ++i) 
            max_heap.pop();
        
        return max_heap.top();
    

    }
};

/*
nums=[2,3,1,5,4]
k=2

max_heap = [5,4,3,2,1]
*/