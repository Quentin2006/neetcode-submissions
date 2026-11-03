/*
return all sets of "well formed" parentheses of length 2n

what is "well formed"
    - ()
    - (())
    - (()())
    - ()()()()
    - each ( is followed by a )

how can we generate all possable solution
    1. have a ( counter
    2. have a ) counter
    3. go through the following posablitlites
        a. if (, follow with a )
        b. if (, following with another (
    4. repate untill ( counter reaches n
    5. make sure ( counter >= ) counter if it isnt, disreagard solution

use could use a bianary tree, where going right is adding (
and going left is adding )
will be of height 2n + 1
leaf nodes on right sub tree, with equal traverses left and right will have the result
*/
class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<vector<string>> res(n + 1);
        res[0] = {""};

        for (int k = 0; k <= n; ++k) {
            for (int i = 0; i < k; ++i) {
                for (const string& left : res[i]) {
                    for (const string& right : res[k - i - 1]) {
                        res[k].push_back("(" + left + ")" + right);
                    }
                }
            }
        }

        return res[n];
    }
};
