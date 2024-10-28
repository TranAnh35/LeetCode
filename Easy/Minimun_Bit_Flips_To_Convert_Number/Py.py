class Solution:
    def minBitFlips(self, start: int, goal: int) -> int:
        temp = start ^ goal
        count = 0
        while temp:
            test = temp & 1
            count += test
            temp = temp >> 1
        return count
    
if __name__ == '__main__':
    start = 10
    goal = 7
    print(Solution().minBitFlips(start, goal))