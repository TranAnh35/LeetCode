class Solution:
    def climbStairs(self, n: int) -> int:
        if n <= 2: 
            return n
        a, b, c = 0, 1, 2
        while (n > 2):
            a, b = b, c
            c = a + b
            n = n - 1
        return c
    
if __name__ == '__main__':
    n = 3
    print(Solution().climbStairs(n))