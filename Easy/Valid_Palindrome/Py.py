import re


class Solution:
    def isPalindrome(self, s: str) -> bool:
        s = re.sub("[^a-z0-9]",'',s.lower())
        return s == s[::-1]
    
if __name__ == '__main__':
    s = "amanaplanacanalpanama"
    print(Solution().isPalindrome(s))