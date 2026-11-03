class Solution {
public:
    int characterReplacement(string s, int k) {

        int longest_len = 0;
        // set a left pointer to go through each char
        for (int i = 0; i < s.length(); ++i) {

            // key: char, val: frequincy 
            unordered_map <char, int> freq;

            // set right pointer to left ptr, go thgouh each char
            for (int j = i; j < s.length(); ++j) {
                // populate hash_map for frequncy
                ++freq[s[j]];

                // find most occuring char in cur str
                pair <char, int> most_freq;
                for (auto & f : freq) {
                    if (f.second > most_freq.second) {
                        most_freq.first = f.first;
                        most_freq.second = f.second;
                    }
                }

                // if string size - most occuing chars freq (# of chars that we have to change) <= k
                    // set longest_len = max(string size, longest_len)
                int cur_size = j-i+1;
                if (cur_size - most_freq.second <= k) 
                    longest_len = max(cur_size, longest_len);
            }
        }

        return longest_len;
                

    }
};
