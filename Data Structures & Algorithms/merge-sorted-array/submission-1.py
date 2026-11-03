
class Solution:


    def merge(self, nums1: List[int], m: int, nums2: List[int], n: int) -> None:
        """
        Do not return anything, modify nums1 in-place instead.
        """

        # points to the last valid emenet in nums1
        p1 = m-1
        # point to last valid emelemnt in nums 2
        p2 = n-1
        # point tot he last index of nums1
        p = m+n-1

        # while there are sitll elements left to merge
        while p2 >= 0:
            # if nums1 still has elements and num1's elemnts is larger
            if p1 >= 0 and nums1[p1] > nums2[p2]:
                nums1[p] = nums1[p1]
                p1-=1
            else:
                # else use nums2
                nums1[p] = nums2[p2]
                p2 -= 1
            # move pointers backwards
            p -= 1
