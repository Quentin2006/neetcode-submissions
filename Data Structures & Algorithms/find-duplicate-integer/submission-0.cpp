class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        // key: num in nums, val: frequncy
        unordered_map<int, int> map;

        for (int & n : nums)  {
            if (map[n]) 
                return n;
            ++map[n];
        }
        
        return -1;

        
    }
};
