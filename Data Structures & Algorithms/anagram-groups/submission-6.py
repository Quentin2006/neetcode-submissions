

class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
         # we can use a map, mapping the counter to a strs
        freqToStrs = defaultdict(list) 
        for s in strs:
            freqToStrs[frozenset(Counter(s).items())].append(s)
        
        return [strs for strs in freqToStrs.values()]
        
