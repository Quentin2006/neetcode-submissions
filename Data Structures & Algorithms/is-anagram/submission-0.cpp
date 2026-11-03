class Solution {
public:
    bool isAnagram(string s, string t) {
        // key: char, value: occurences
        map <char, int> char_count_s;
        map <char, int> char_count_t;

        for (auto c : s) 
            ++char_count_s[c];
        
        for (auto c : t) 
            ++char_count_t[c];

        return char_count_s == char_count_t;
        
    }
};
