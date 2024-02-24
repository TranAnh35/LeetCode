class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        dict = {}
        ans = 0
        i, j = 0, 0
        while j < len(s):
            if s[j] in dict:
                i = max(dict[s[j]], i)
            ans = max(ans, j - i + 1)
            dict[s[j]] = j + 1
            j += 1
        return ans    
        
if __name__ == "__main__":
    s = "abcabcbb"
    print(Solution().lengthOfLongestSubstring(s))