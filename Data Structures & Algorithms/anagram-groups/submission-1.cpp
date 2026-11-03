class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        // mapping of char frequency to list of string
        map < map <char, int>, vector<string> > list;

        
        for (int i = 0 ; i < strs.size(); ++i) {
            string cur = strs[i];
            // maps char to # of occurances
            map <char, int> freq;
            for (int j = 0; j < cur.length(); ++j)
                ++freq[strs[i][j]];

            list[freq].push_back(cur);
        }


        vector<vector<string>> result;

        for (auto const& v : list) 
            result.push_back(v.second);

        return result;
        
    }
};
