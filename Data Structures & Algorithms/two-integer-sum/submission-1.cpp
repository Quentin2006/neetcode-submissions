class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // key: num, value: index
        map <int, int> num_index_map;

        int len = nums.size();
        for (int i {0}; i < len; ++i) 
            num_index_map[nums[i]] = i;

        for (int i {0}; i < len; ++i) {
            int find = target - nums[i];
            if (num_index_map[find] && num_index_map[find] != i) {
                return {i, num_index_map[find]};
            }
        }
    }
};
