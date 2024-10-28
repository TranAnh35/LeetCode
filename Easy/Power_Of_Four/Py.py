import math


class Solution:
    def isPowerOfFour(self, n: int) -> bool:
        if n <= 0:
            return False
        result = math.log(n, 4)
        return result.is_integer()
    
if __name__ == '__main__':
    n = 16
    print(Solution().isPowerOfFour(n))