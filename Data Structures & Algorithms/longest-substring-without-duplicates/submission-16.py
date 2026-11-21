class Solution:

    def numSubstrOccurance(self, s: str, subS: str) -> int:
        # start at first idx,
        # idx
        if len(subS) == 0:
            return 10

        res = 0

        for i in range(len(s)):
            for j in range(len(s)):
                if j == len(subS)-1 and i + j < len(s) and s[i+j] == subS[j]:
                    res += 1
                    

        return res
        
    def lengthOfLongestSubstring(self, s: str) -> int:
        """
        use sliding window,


        s = "zxyzxyz"


        iter 0:
            substr=""
            windowSize = 1

            substr += s[0]

            is substr in s twice: yes
                windowsize = 2

        iter 1:
            substr="z"
            windowSize = 2

            substr += s[1]

            is substr in s twice: yes
                windowsize = 3
            
        iter 2:
            substr="zx"
            windowSize = 3

        ...
        repeat untill end of str, and reutnr max substr len
        """

        if len(s) == len(set(s)):
            return len(s)

        # loop over all chars
        maxLenSubStr = 0
        for i in range(len(s)):
            window = 0
            substr = ""

            while len(set(substr)) == len(substr) and i+window < len(s):
                substr += s[i+window]
                window += 1
            
            maxLenSubStr = max(window-1, maxLenSubStr)

        return maxLenSubStr 


    
         
        