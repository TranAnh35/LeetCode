from typing import List


class Solution:
    def generate(self, numRows: int) -> List[List[int]]:
        arr = []
        arr.append([1])
        for x in range(1,numRows):
            arr.append([])
            for y in range(x + 1):
                if y == 0 or y == x:
                    arr[x].append(1)
                else:
                    arr[x].append(arr[x-1][y] + arr[x-1][y-1])
        return arr
    
    
if __name__ == '__main__':
    numRows = 5
    print(Solution().generate(numRows))