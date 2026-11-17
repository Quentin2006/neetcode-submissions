class Solution:
    def isPalindrome(self, s: str) -> bool:
        l,r=0,len(s)-1

        while l < r and r > 0 and l < len(s)-1:
            while not s[r].isalnum()and r > 0 and l < len(s):
                r-=1
            while not s[l].isalnum()and r > 0 and l < len(s):
                l+=1
            if s[l].lower() != s[r].lower():
                return False
            r-=1
            l+=1
        
        return True
            
