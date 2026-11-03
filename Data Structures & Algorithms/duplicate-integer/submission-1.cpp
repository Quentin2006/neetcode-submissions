class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        // key: number, value: occurances of said number
        unordered_set <int> seen;

        for (auto num : nums)  {
            if (seen.count(num)) return true;
            seen.insert(num);
        }
        
        return false;
        
    }
};
