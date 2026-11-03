class Solution:
    def longestCommonPrefix(self, strs: List[str]) -> str:

        res = ''
        curCharIdx = 0
        while curCharIdx < len(strs[0]):
            curChar = strs[0][curCharIdx]
            for s in strs:
                if len(s) -1< curCharIdx:
                    return res
                c = s[curCharIdx]
                print(c)
                if c != curChar:
                    return res
            res += curChar
            curCharIdx += 1

        return res