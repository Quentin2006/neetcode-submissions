class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        // key: int, value: frequency
        unordered_map<int, int> count;
        // makes vector of size nums_size() + 1 holding a list of vectors
        vector<vector<int>> freq(nums.size() + 1);

        // populates our map
        for (int n : nums) 
            count[n] = 1 + count[n];
        
        //fill vector at index with number
        for (const auto& entry : count) 
            freq[entry.second].push_back(entry.first);
        

        vector<int> res;
        // iterates through loop, startring at last index
        for (int i = freq.size() - 1; i > 0; --i) {
            // adds numbers held in said list to sol
            for (int n : freq[i]) {
                res.push_back(n);
                // checks if we filled with k elements
                if (res.size() == k) {
                    return res;
                }
            }
        }
        return res;
    }
};