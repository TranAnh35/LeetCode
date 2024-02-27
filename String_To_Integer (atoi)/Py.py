class Solution:
    def myAtoi(self, s: str) -> int:
        s = s.strip()
        if len(s) == 0:
            return 0
        if s[0] not in "+-0123456789":
            return 0
        if s[0] in "+-":
            if len(s) == 1 or s[1] not in "0123456789":
                return 0
        i = 1
        while i < len(s) and s[i] in "0123456789":
            i += 1
        s = s[:i]
        if len(s) == 1 and s[0] in "+-":
            return 0
        if int(s) > 2 ** 31 - 1:
            return 2 ** 31 - 1
        if int(s) < -2 ** 31:
            return -2 ** 31
        return int(s)
    
if __name__ == "__main__":
    s = Solution()
    print(s.myAtoi("42"))
    print(s.myAtoi("   -42"))
    print(s.myAtoi("4193 with words"))
    print(s.myAtoi("words and 987"))
    print(s.myAtoi("-91283472332"))
    print(s.myAtoi("3.14159"))