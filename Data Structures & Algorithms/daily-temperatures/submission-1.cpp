class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temp) {
        // return vector res, where res[i] = # of indices untill warmer day in temp
        // i.e. res[i] = t, where t is any positive #, 
        // and temp[i+t] > temp[i];
        // if no hotter day, set res[i] = 0

        vector<int> res;

        // iterate through temp
        for (int i = 0; i < temp.size(); ++i) {
            bool hotter = false;
            // compare cur val to each other val in temp
            for (int j = i; j < temp.size() && !hotter; ++j) {
                // if val > cur, add j to res[i];
                if (temp[j] > temp[i]) {
                    hotter = true;
                    // set hotter flag to true
                    res.push_back(j-i);
                }
            }
            // if (!hotter) set res[i] = 0;
            if (!hotter)
                res.push_back(0);
               
        }

        return res;
           
    }
};
