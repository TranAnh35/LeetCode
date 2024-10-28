from typing import List


class Solution:
    def getRow(self, rowIndex: int) -> List[int]:
        lst=[]
        for i in range(rowIndex+1):
            lst1 = [1] * (i + 1)
            for j in range(1,i):
                lst1[j] = lst[i - 1][j] + lst[i - 1][j - 1]
            lst.append(lst1)
        return lst[rowIndex]
    
if __name__ == '__main__':
    rowIndex = 3
    print(Solution().getRow(rowIndex))