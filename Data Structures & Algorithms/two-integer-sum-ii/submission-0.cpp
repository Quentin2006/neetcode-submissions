class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        
        for (int i = 0; i < numbers.size(); ++i) {
            int find = target - numbers[i];
            for (int j = 0; j < numbers.size(); ++j) {
                if (i != j) {
                    if (numbers[j] == find) {
                        if (i > j) return {j+1,i+1};
                        return {i+1,j+1};
                    }
                }
            }
        }
    }
};
