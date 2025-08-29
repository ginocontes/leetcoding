class Solution:
    def getRow(self, rowIndex: int) -> List[int]:
        if(rowIndex == 0):
            return [1] # base case
        res = []
        for i in range(rowIndex +1):
            previous = self.getRow(rowIndex-1)
            # handle border
            if i-1 < 0:
                left = 0
            else:
                left = previous[i-1]
            if i> rowIndex-1:
                right = 0
            else:
                right = previous[i]
            n = left + right
            res.append(n)
        return res

        