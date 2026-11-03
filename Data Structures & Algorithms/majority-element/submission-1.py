class Solution:
    def majorityElement(self, nums: List[int]) -> int:
        freq_nums = Counter(nums)

        maxNum = 0
        maxFreq = 0
        for num, freq in freq_nums.items():
            if freq > maxFreq:
                maxNum = num
                maxFreq = freq
    
        return maxNum