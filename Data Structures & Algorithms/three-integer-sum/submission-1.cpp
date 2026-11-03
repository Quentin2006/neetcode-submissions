class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        vector<vector<int>> result;

        for (int i = 0; i < nums.size(); ++i) {
            if (i > 0 && nums[i] == nums[i-1]) continue;

            vector<int> temp;
            int l = i + 1;
            int r = nums.size()-1;

            while (l < r) {
                if (nums[i] + nums[l] + nums[r] < 0) 
                    ++l;
                else if (nums[i] + nums[l] + nums[r] > 0) 
                    --r;
                else {
                    result.push_back({nums[i], nums[l], nums[r]});
                    ++l;
                    --r;

                    while(l < r && nums[l] == nums[l-1])
                        ++l;

                }

            }
            
            /* O(N^3) 
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

            */

        }

        return result;
           
    }
};
