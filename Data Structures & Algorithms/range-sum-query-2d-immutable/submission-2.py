class NumMatrix:

    def __init__(self, matrix: List[List[int]]):
        self.matrix = matrix

    def sumRegion(self, row1: int, col1: int, row2: int, col2: int) -> int:
        matSum = 0
        for row in range(row1, row2+1):
            for col in range(col1, col2+1):
                matSum += self.matrix[row][col]

        return matSum

"""
[
    [3 0 1 4 2],
    [5 6 3 2 1],
    [1 2 0 1 5],
    [4 1 0 1 7]
]

[2, 1, 3, 4] indcies


        
"""

# Your NumMatrix object will be instantiated and called as such:
# obj = NumMatrix(matrix)
# param_1 = obj.sumRegion(row1,col1,row2,col2)