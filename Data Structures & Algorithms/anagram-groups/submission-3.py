from collections import defaultdict
class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
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