class Solution:
    def addBinary(self, a: str, b: str) -> str:
        c = '0' + (str(int(a)+int(b)))
        while '2' in c:
            c = c.replace('02', '10')
            c = c.replace('12', '20')
        return c[1:] if c[0] == '0' else c
    
if __name__ == '__main__':
    a = '11'
    b = '1'
    print(Solution().addBinary(a, b)) # 100