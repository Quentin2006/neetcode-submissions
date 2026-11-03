class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        // mapping char count to list of anagrams
        map <string, vector<string>> res;

        for (auto s : strs) {
            int count [26];
            for (int i = 0; i < 26; ++i)
                count[i] = 0;

            for (auto c : s) 
                ++count[c - 'a'];

            string key = to_string(count[0]);
            for (int i = 1; i < 26; ++i) 
                key += ',' + to_string(count[i]);

            res[key].push_back(s);
        }

        vector<vector<string>> result;

        for (const auto & pair: res) 
            result.push_back(pair.second);

        return result;
    }
};
