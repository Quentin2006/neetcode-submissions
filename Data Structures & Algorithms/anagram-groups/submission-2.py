from collections import defaultdict
class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        """
        # convert strs -> List[Counter]
        strs_freq= [Counter(s) for s in strs]

        res = []
        # loop over strs, 
        # if str_freq[i] == str_freq[j], where i != j
        #   add to res

        for i in range(len(strs)):
            cur_anagram = []
            for j in range(len(strs)):
                if i != j and strs_freq[i] == strs_freq[j]:
                    cur_anagram.append(strs[j])
            res.append(cur_anagram)
        """

        # want to map freq of word -> list[str]
        freq_to_strs = defaultdict(list)

        # go through all strs
        for i in range(len(strs)):
            # get the current work
            cur_word = strs[i]
            # get the freq of word
            cur_freq = Counter(cur_word)
            # update map
            freq_to_strs[tuple(sorted(cur_freq.items()))].append(strs[i])

        return list(freq_to_strs.values())