class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        // s1, mapping char to freq
        unordered_map <char, int> find;
        // fills map
        for (const char & c : s1)
            ++find[c];
        
        // iterate through string
        for (int l = 0; l <= s2.size(); ++l) {
            // set right ptr to start at l, iterate through string till end
            unordered_map <char, int> cur;
            // populates map
            for (int r = l; r <= s2.size(); ++r) {
                if (find == cur) return true;
                ++cur[s2[r]];
            }

        }

        return false;

    }
};
