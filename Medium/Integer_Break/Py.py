class Solution:
    def integerBreak(self, n: int) -> int:
        return (n - 1) if n <= 3 else (3 ** (n // 3)) if n % 3 == 0 else (4 * 3 ** (n // 3 - 1)) if n % 3 == 1 else (2 * 3**(n//3))
    
if __name__ == '__main__':
    n = 10
    print(Solution().integerBreak(n))