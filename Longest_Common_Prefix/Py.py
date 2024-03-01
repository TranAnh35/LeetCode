from typing import List


class Solution:
    def longestCommonPrefix(self, strs: List[str]) -> str:
        if not strs:
            return ""
        prefix = strs[0]
        for s in strs[1:]:
            while prefix:
                if s.startswith(prefix):
                    break
                prefix = prefix[:-1]
        return prefix
        
    
if __name__ == "__main__":
    s = Solution()
    print(s.longestCommonPrefix(["flower","flow","flight"])) 
    print(s.longestCommonPrefix(["dog","racecar","car"])) 
    print(s.longestCommonPrefix(["ab", "a"])) 
    print(s.longestCommonPrefix(["a", "ab"])) 
    print(s.longestCommonPrefix(["a", "a"])) 
    print(s.longestCommonPrefix(["a", "b"])) 