class Solution:
    def longestCommonPrefix(self, strs: List[str]) -> str:
        res = ""

        for i in range(len(strs[0])):
            all_same = True
            cur_char = strs[0][i]

            for string in strs:
                if i >= len(string) or string[i] != cur_char:
                    all_same = False

            if all_same:
                res += cur_char
            else:
                break
        return res



