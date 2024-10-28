class Solution:
    def isHappy(self, n: int) -> bool:
        seen = set()

        num = n
        while True:
            sum_squared_digit = self.get_sum_squared_digits(num)
            if sum_squared_digit in seen:
                return False
            if sum_squared_digit == 1:
                return True
            seen.add(sum_squared_digit)
            num = sum_squared_digit
    
    def get_sum_squared_digits(self, num):
        res = num
        s = 0
        while (res):
            digit = res % 10
            res = res // 10
            s += digit ** 2
        
        return s
    
if __name__ == '__main__':
    n = 19
    print(Solution().isHappy(n))