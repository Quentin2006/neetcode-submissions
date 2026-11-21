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

        # loop over all chars
        maxLenSubStr = 0
        for i in range(len(s)):
            substr = ""
            windowSize = 1

            # for each char, keep track of cur substr
            # ensure substr has only unique chars
            # ensure the occurace of substr in s > 1
            j = 0
            while len(set(substr)) == len(substr) and i+j < len(s) and self.numSubstrOccurance(s, substr) >= 1:
                substr += s[i+j]
                j += 1
                print(s, substr, j)
                print(len(set(substr)) == len(substr), self.numSubstrOccurance(s, substr) > 1)
            
            maxLenSubStr = max(maxLenSubStr, len(substr)-1)

        return maxLenSubStr 


    
         
        