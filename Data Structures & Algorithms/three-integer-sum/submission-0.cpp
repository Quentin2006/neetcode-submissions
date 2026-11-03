class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> result;

        for (int i = 0; i < nums.size(); ++i) {
            vector<int> temp;
            for (int j = 0; j < nums.size(); ++j) {
                for (int k = 0; k < nums.size(); ++k) {
                    if (i != j && i != k && j != k) {
                        if (nums[i] + nums[j] + nums[k] == 0) {
                            temp.push_back(nums[i]);
                            temp.push_back(nums[j]);
                            temp.push_back(nums[k]);
                            sort(temp.begin(), temp.end());

                            bool valid = true;
                            for (const vector<int> nums_vec : result) 
                                if (temp == nums_vec)
                                    valid = false;

                            if (valid)
                                result.push_back(temp);

                            temp.clear();
                        }
                    }
                }
            }
        }

        return result;
           
    }
};
