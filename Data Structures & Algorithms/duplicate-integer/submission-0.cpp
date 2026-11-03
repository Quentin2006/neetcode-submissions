class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        // key: number, value: occurances of said number
        map <int, int> count_map;

        for (auto num : nums) 
            ++count_map[num];

        for (auto num : nums) 
            if (count_map[num] >= 2)
                return true;

        return false;
        
    }
};
