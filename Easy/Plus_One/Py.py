from typing import List


class Solution:
    def plusOne(self, digits: List[int]) -> List[int]:
        for idx in range(len(digits)-1, -1, -1):
            if digits[idx] != 9:
                digits[idx] += 1
                break
            else:
                digits[idx] = 0
        if digits[0] == 0:
            digits.insert(0, 1)
        return digits
    
if __name__ == '__main__':
    digits = [9,9,9]
    print(Solution().plusOne(digits))