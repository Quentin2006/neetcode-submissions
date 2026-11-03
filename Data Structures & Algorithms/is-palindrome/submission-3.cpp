class Solution {
public:
    bool isPalindrome(string s) {
        string str;
        for (int i = 0; i < s.size(); ++i)
            if (isalnum(s[i])) 
                str += tolower(s[i]);

        int l = 0;
        int r = str.size()-1;

        cout << str;

        while (l < r) {
            if (str[l] == str[r]) {
                ++l;
                --r;
            }
            else return false;
        }

        return true;
    }
};
