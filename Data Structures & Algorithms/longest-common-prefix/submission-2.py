class Solution:
    def longestCommonPrefix(self, strs: List[str]) -> str:
        prefix = ""

        # go thorugh all chars in strs[0]
        for i in range(len(strs[0])):
            # go through all other strs
            isPrefix = True
            for s in strs:
                if i == len(s) or s[i] != strs[0][i]:
                    return prefix
            if isPrefix:
                prefix += strs[0][i]
            else:
                break
        return prefix


