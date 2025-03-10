from typing import List


class Solution:
    def reverseString(self, s: List[str]) -> None:
        start = 0
        end = len(s) - 1
        
        while start < end:
            s[start], s[end] = s[end], s[start]
            start += 1
            end -= 1
            
if __name__ == '__main__':
    s = ["h","e","l","l","o"]
    Solution().reverseString(s)
    print(s)