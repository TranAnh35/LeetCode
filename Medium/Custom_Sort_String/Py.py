class Solution:
    def customSortString(self, order: str, s: str) -> str:
        ans = ""
        dict = {}
        for i in s:
            if i in dict:
                dict[i] += 1
            else:
                dict[i] = 1
        for c in order:
            while c in dict and dict[c] > 0:
                ans += c
                dict[c] -= 1
        for k, v in dict.items():
            while v > 0:
                ans += k
                v -= 1
        return ans
    
if __name__ == '__main__':
    order = "cba"
    s = "abcd"
    print(Solution().customSortString(order, s))