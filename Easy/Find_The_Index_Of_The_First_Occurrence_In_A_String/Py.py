class Solution:
    def strStr(self, haystack: str, needle: str) -> int:
        return haystack.find(needle)
    
if __name__ == '__main__':
    s = Solution()
    print(s.strStr("hello", "ll")) 
    print(s.strStr("aaaaa", "bba")) 
    print(s.strStr("", "")) 
    print(s.strStr("a", "a")) 
    print(s.strStr("mississippi", "issip"))
    print(s.strStr("mississippi", "pi")) 
    print(s.strStr("mississippi", "issipi")) 
    print(s.strStr("mississippi", "issip")) 
    print(s.strStr("mississippi", "ississip"))
    print(s.strStr("mississippi", "ississipi"))