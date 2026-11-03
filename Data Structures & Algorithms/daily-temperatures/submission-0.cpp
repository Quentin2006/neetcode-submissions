class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temp) {
        vector<int> result;

        // brute force approach

        for (int i = 0; i < temp.size(); ++i) {

            bool found_warmer = false;
            for (int j = i+1; j < temp.size() && !found_warmer; ++j) {
                if (temp[j] > temp[i]) {
                    result.push_back(j - i);
                    found_warmer = true;
                }
            }

            if (!found_warmer)
                result.push_back(0);
        }

        return result;
    }
};
