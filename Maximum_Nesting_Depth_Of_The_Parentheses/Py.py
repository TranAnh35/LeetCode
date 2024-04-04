class Solution:
    def maxDepth(self, s: str) -> int:
        count = 0
        maxCount = 0
        for i in s:
            if i == '(':
                count += 1
                maxCount = max(count, maxCount)
            elif i == ')':
                count -= 1
        return maxCount
    
if __name__ == '__main__':
    s = Solution()
    print(s.maxDepth('(1+(2*3)+((8)/4))+1'))
    print(s.maxDepth('(1)+((2))+(((3)))'))
    print(s.maxDepth('1+(2*3)/(2-1)'))
    print(s.maxDepth('1'))