class Solution:
    def convertToTitle(self, columnNumber: int) -> str:
        seen = []
        while columnNumber > 0:
            columnNumber -= 1
            n = columnNumber % 26
            columnNumber //= 26
            seen.append(chr(n + 65))
        return ''.join(seen[::-1])
    
if __name__ == '__main__':
    columnNumber = 701
    print(Solution().convertToTitle(columnNumber))