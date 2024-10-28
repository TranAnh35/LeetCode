class Solution:
    def reverse(self, x: int) -> int:
        # if x < 0:
        #     x = -int(str(x)[:0:-1])
        # else:
        #     x = int(str(x)[::-1])
        # if x < -2**31 or x > 2**31 - 1:
        #     return 0
        # return x
        
        x = int(str(abs(x))[::-1]) * (-1 if x < 0 else 1)
        return x if x < 2**31 and x >= -2**31 else 0    
    
if __name__ == '__main__':
    x = 123
    print(Solution().reverse(x))
    x = -123
    print(Solution().reverse(x))
    x = 120
    print(Solution().reverse(x))
    x = 0
    print(Solution().reverse(x))
    x = 1534236469
    print(Solution().reverse(x))
    x = -2147483648
    print(Solution().reverse(x))