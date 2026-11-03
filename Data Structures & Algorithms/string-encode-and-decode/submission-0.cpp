class Solution {
public:

    string encode(vector<string>& strs) {
        string encoded;

        for (const auto & str : strs) {
            encoded += str;
            encoded += '\0';
        }

        return encoded;
    }

    vector<string> decode(string s) {
        vector<string> decoded;

        string cur;
        for (int i = 0; i < s.length(); ++i) {
            if (s[i] == '\0') {
                decoded.push_back(cur);
                cur.clear();
            }
            else 
                cur += s[i];
            
        }

        return decoded;

    }
};
