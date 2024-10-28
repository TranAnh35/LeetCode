import math

class Solution:
    def pivotInteger(self, n: int) -> int:
        # left = right = 0
        # for i in range(1, n + 1):
        #     left = i * (i + 1) / 2
        #     right = n * (n + 1) / 2 - i * (i - 1) / 2
            
        #     if left == right:
        #         return i
        # return -1
        
        x = math.sqrt(n*(n+1)/2)
        converted = int(x)
        return converted if converted == x else -1

    
if __name__ == "__main__":
    s = Solution()
    print(s.pivotInteger(7))
    