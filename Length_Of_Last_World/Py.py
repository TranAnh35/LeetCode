class Solution:
    def lengthOfLastWord(self, s: str) -> int:
        if(len(s) == 0):
            return 0
        lst = s.split()
        return len(lst[-1])
    
    
if __name__ == "__main__":
    s = Solution()
    print(s.lengthOfLastWord("Hello World"))
    print(s.lengthOfLastWord("   fly me   to   the moon  "))