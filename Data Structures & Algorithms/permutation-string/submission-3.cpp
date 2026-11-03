class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        // char -> freq
        unordered_map<char, int> freq;
        // fills map
        for (char & c: s1)
            ++freq[c];

        // using a siliding window,
        int l = 0;
        int r = s1.size();

        while (r <= s2.size()) {
            // char -> freq
            unordered_map<char, int> cur_freq;
            // fills map
            for (int i = l; i < r; ++i)
                ++cur_freq[s2[i]];

            if (cur_freq == freq)
                return true;
            
            ++l;
            ++r;
        }

        return false;
    }
};
