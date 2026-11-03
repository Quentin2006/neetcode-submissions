class Solution:
    def removeElement(self, nums: List[int], val: int) -> int:
        # WANT: remove all occurances of val from nums w/ space complexity O(1)
        # Return # of remaning elements k st first k elements of nums dosent have val

                
        try:
            while True:
                nums.remove(val)
        except:
            pass

        # now nums has no val, lets sort
        return len(nums)