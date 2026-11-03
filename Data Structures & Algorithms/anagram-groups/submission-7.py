

class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
         # we can use a map, mapping the counter to a strs

        """
        time = O(NM) where N == len(strs) and M == length of longest str in strs
        space = O(MN) where M is the # of len(strs) and N == length of longest str in strs
        """
        freqToStrs = defaultdict(list) 
        for s in strs:
            freqToStrs[frozenset(Counter(s).items())].append(s)
        
        return [strs for strs in freqToStrs.values()]
        
