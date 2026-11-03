class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int res = 0;
        for (int i = 0; i < s.size(); i++) {
            // maps char to frequency
            unordered_map<char, int> charMap;
            int size = 0;
            for (int j = i; j < s.size(); j++) {
                if (charMap[s[j]])
                    break;
                ++size;
                ++charMap[s[j]];
            }
            res = max(res, size);
        }
        return res;
    }
};
