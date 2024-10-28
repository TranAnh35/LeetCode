class Solution:
    def romanToInt(self, s: str) -> int:
        roman = {
            "I": 1, 
            "V": 5, 
            "X": 10, 
            "L": 50, 
            "C": 100, 
            "D": 500, 
            "M": 1000
        }
        result = 0
        prev = 0
        for c in s:
            curr = roman[c]
            result += curr
            if prev < curr:
                result -= prev * 2
            prev = curr
        return result
    
    
if __name__ == "__main__":
    s = Solution()
    print(s.romanToInt("III")) # 3
    print(s.romanToInt("IV")) # 4
    print(s.romanToInt("IX")) # 9
    print(s.romanToInt("LVIII")) # 58
    print(s.romanToInt("MCMXCIV")) # 1994