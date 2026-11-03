class Solution {
public:
    int findDuplicate(vector<int>& nums) {


        // use slow and fast ptr 
        int slow = 0;
        int fast = 1;

        while (true) {
            if (slow == fast) {
                fast = (fast + 1) % nums.size();
            }

            if (nums[slow] == nums[fast]) 
                return nums[slow];

            slow = (slow + 1) % nums.size();
            fast = (fast + 2) % nums.size();
        }

        return -1;

        



        /*
        O(N) SPACE
        O(N) TIME

        // key: num in nums, val: frequncy
        unordered_map<int, int> map;

        for (int & n : nums)  {
            if (map[n]) 
                return n;
            ++map[n];
        }
        
        return -1;
        */
        
    }
};
